import os, sys, nso, csv, re
from colorama import Fore, Style
from capstone import *
from elftools.elf.elffile import ELFFile

TOTAL_GAME_SIZE = 0x7100A991D8  # Decomp ends here!

skip_funcs = ("_ZN2nn", "_ZN4sead", "_ZN3agl", "_ZN3eui")

def getModule(sym):
    for root, dirs, files in os.walk("map"):
        for file in files:
            if file.endswith(".map"):
                map_path = os.path.join(root, file)
                with open(map_path, "r") as f:
                    lines = f.readlines()

                for line in lines:
                    fmt = line.replace("\n", "")
                    if fmt == sym:
                        # we found where our symbol lives!
                        # we just grab the source module
                        object_path = map_path.replace("map", "build", 1)
                        object_path = object_path.replace(".map", ".o")
                        return object_path
    return ""


def getKnownFunctions():
    known = []

    for root, dirs, files in os.walk("map"):
        for file in files:
            if file.endswith(".map"):
                map_path = os.path.join(root, file)
                with open(map_path, "r") as f:
                    lines = f.readlines()
                    for line in lines:
                        known.append(line.replace("\n", ""))

    return known


def format_instruction(insn):
    match = re.match(r"<CsInsn (0x[0-9a-f]+)\s+\[([0-9a-f]+)\]:\s+(.*)>", insn)
    if match:
        address, opcode, insts = match.groups()
        return f"{address:<4} - {opcode.upper()}: {insts}"
    else:
        return insn


def compare(sym, addr, original_size):
    with open("odyssey.nso", "rb") as f:
        nso_file = nso.NSO(f.read())

    funcData = nso_file.getFunction(addr, original_size)
    capstone_inst = Cs(CS_ARCH_ARM64, CS_MODE_ARM + CS_MODE_LITTLE_ENDIAN)
    capstone_inst.detail = True
    capstone_inst.imm_unsigned = False

    original_instrs = list(capstone_inst.disasm(funcData, 0))

    object_path = getModule(sym)
    if object_path == "":
        print("Failed to find the function in your compiled code.")
        return 2

    with open(object_path, "rb") as elf:
        elf_file = ELFFile(elf)
        symtab = elf_file.get_section_by_name('.symtab')

        compiled_symbol = symtab.get_symbol_by_name(sym)[0]
        custom_offset = compiled_symbol["st_value"]
        custom_size = compiled_symbol['st_size']
        text = elf_file.get_section_by_name('.text')
        custom_data = text.data()[custom_offset:custom_offset + custom_size]
        custom_instructions = list(capstone_inst.disasm(custom_data, 0))

    mismatch = 0

    color = Fore.RED
    print(f'{Fore.WHITE}{sym} {Style.DIM}at 0x{addr}{Style.RESET_ALL}')

    for i in range(min(len(original_instrs), len(custom_instructions))):
        curOrigInstr = original_instrs[i]
        curCustInstr = custom_instructions[i]

        orig_str = format_instruction(str(curOrigInstr))
        cust_str = format_instruction(str(curCustInstr))

        if curOrigInstr.id in [9, 6, 162, 21, 16]:
            color = Fore.YELLOW

        if curOrigInstr.id != curCustInstr.id:
            color = Fore.RED
            mismatch += 1

        if str(curOrigInstr) == str(curCustInstr):
            color = Fore.GREEN

        print(color + f'{str(orig_str):<80}{cust_str}{Style.RESET_ALL}')

    if mismatch == 0:
        print("Marking function as matched!")
        generate_csv_base(sym)
        return 1
    return 0


def is_skipped_symbol(symbol):
    if any(s in symbol for s in skip_funcs):

        if re.search(r'\d', symbol):
            return True
    return False


def generate_csv_base(match_sym="", clear=False):
    with open("data/main.map", 'r') as f:
        lines = f.readlines()

    if match_sym and clear == False:  # if match_sym is not empty
        with open('data/functions.csv', 'r') as f:
            reader = csv.reader(f)

            modified_rows = []
            for row in reader:
                if row[1] == match_sym:
                    row[2] = 'true'
                modified_rows.append(row)

        with open('data/functions.csv', 'w') as f:
            writer = csv.writer(f)
            writer.writerows(modified_rows)

    else:  # if match_sym is empty
        print("Generating CSV file...")
        with open('data/functions.csv', 'w') as f:
            writer = csv.writer(f)
            writer.writerow(['Address', 'Symbol Name', 'Matching'])

            symbols = []
            for line in lines:
                address, symbol = line.strip().split('=')

                if is_skipped_symbol(symbol):
                    continue
                if int(address, 16) > TOTAL_GAME_SIZE:
                    continue

                writer.writerow([address, symbol, 'false'])


def main(symbol):
    sym_found = False

    with open('data/functions.csv', 'r') as f:

        reader = csv.reader(f)
        next(reader)

        for row in reader:
            address, symbol_name, matching = row

            if int(address, 16) > TOTAL_GAME_SIZE:
                continue

            if symbol_name == symbol:
                next_row = next(reader)

                next_address = next_row[0]
                func_size = int(next_address, 16)-int(address, 16)

                sym_found = True
                break

        if sym_found == False:
            print("Could not find symbol in functions.csv.")
            return 2

        return compare(symbol_name, int(address, 16)-0x7100000000, func_size)


if __name__ == '__main__':
    if len(sys.argv) == 1:
        print("Usage: check.py [-all] [-force-csv] <symbol>")
        sys.exit(1)
    symbol = sys.argv[-1]
    check_all = False
    generate_csv = False
    if "-all" in sys.argv:
        check_all = True
    if "-force-csv" in sys.argv:
        generate_csv = True

    if not os.path.exists("data/functions.csv") or generate_csv:
        generate_csv_base("", True)
        print("Please run -all to fill the csv!")

    if check_all:
        messages = []

        mismatch = 0
        matched = 0
        not_found = 0

        for sym in getKnownFunctions():
            ret = main(sym)

            if ret == 1:
                matched += 1

            if ret == 0:
                mismatch += 1
                messages.append(
                    f'{Fore.RED}{sym}: does not match{Style.RESET_ALL}')

            if ret == 2:
                not_found += 1

        for msg in messages:
            print(msg)
        print()
        print(f'Matched {matched} functions!')
        print(f'{mismatch} functions do not match.')
        print(f'{not_found} functions could not be found.')

    else:
        main(symbol)

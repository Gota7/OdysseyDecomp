import math, os, sys, csv

TOTAL_GAME_SIZE = 0x7100A991D8 # Stop at the end of this

total_size = 0 # Size of all functions that we count
total_funcs = 0 # Amount of functions
completed_funcs = 0 # Size of completed functions

prev_address = 0

# Start of the symbol for functions we want to skip
skip_funcs = ("_ZN2nn", "_ZThn32_N2nn", "_ZN4sead")

def truncate(number, digits) -> float:
    stepper = 10.0 ** digits
    return math.trunc(stepper * number) / stepper

with open('data/functions.csv', 'r') as f:
    reader = csv.reader(f)

    next(reader)

    for row in reader:
        address, symbol_name, matching = row
        total_funcs += 1

        if symbol_name.startswith(skip_funcs):
            continue
        else:
            func_size = int(address, 16) - prev_address
            total_size += func_size
            prev_address = int(address, 16)
            
            if matching == "true":
                completed_funcs += 1


        if total_size >= TOTAL_GAME_SIZE:
            break

prog = (completed_funcs / total_funcs) * 100

print("Progress:")
print(f"{prog:.5f}% [{completed_funcs} / {total_funcs}]")

print("Generating JSON...")

# generate our JSON for the tags on the github page
json = []
json.append("{\n")
json.append("\t\"schemaVersion\": 1,\n")
json.append("\t\"label\": \"decompiled\",\n")
json.append(f"\t\"message\": \"{truncate(prog, 4)}%\",\n")
json.append("\t\"color\": \"blue\"\n")
json.append("}")

with open("data/percent.json", "w") as w:
    w.writelines(json)
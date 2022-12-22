import subprocess
import sys
import os
import pathlib
import shutil
from ninja import ninja_syntax

nonmatching_str = ""
clean_ninja = False

if "-clean" in sys.argv:
    clean_ninja = True

if "-non-matching" in sys.argv:
    nonmatching_str = "-DNON_MATCHING"
    print("Non-functions matches will be compiled")

include_dirs = ["include", "include/al/Library", "include/al/Project", "lib/agl/include", "lib/nnheaders/include", "lib/sead/include", "tools/clang/include/c++/v1"]
incdirs = ""
for dir in include_dirs:
    incdirs += f'-I {dir} '

COMPILER_CMD = f"-x c++ -O3 -std=gnu++1z --target=aarch64-linux-elf -mcpu=cortex-a57+fp+simd+crypto+crc -fno-exceptions -fms-extensions -mno-implicit-float -fno-strict-aliasing -fno-short-enums -fdata-sections -fPIC -g -Wall {nonmatching_str} {incdirs} -D NNSDK -c "
COMPILER_PATH = pathlib.Path("tools/clang/bin/clang")
OBJDUMP_PATH = pathlib.Path("tools/clang/bin/llvm-objdump")

tasks = list()

for root, dirs, files in os.walk("source"):
    for file in files:
        if file.endswith(".cpp"):
            source_path = os.path.join(root, file)
            build_path = source_path.replace("source", "build", 1).replace(".cpp", ".o")
            map_path = build_path.replace("build", "map", 1).replace(".o", ".map")

            os.makedirs(os.path.dirname(build_path), exist_ok=True)
            os.makedirs(os.path.dirname(map_path), exist_ok=True)
            tasks.append((source_path, build_path, map_path))

bo = open("build.ninja", "w")
nw = ninja_syntax.Writer(bo)

nw.rule("cc", f"{COMPILER_PATH} $flags $in -o $out", "Compiling $in...")
nw.newline()

for task in tasks:
    source_path, build_path, map_path = task     

    nw.build(build_path, "cc", source_path, variables= { 'flags': COMPILER_CMD })

    mapFileOutput = subprocess.check_output([OBJDUMP_PATH, build_path, "-t"]).decode("utf-8").replace("\r", "")
    lines = mapFileOutput.split("\n")
   
    newOutput = []

    for line in lines:
        if line == '':
            continue

        if line.startswith("build") or line.startswith("SYMBOL TABLE"):
            continue

        more_split = line.split(" ")
        
        # if global, it is most likely a symbol
        if more_split[1] == "g":
            # symbol is always the last entry
            sym = more_split[(len(more_split) - 1)]
            newOutput.append(f"{sym}\n")

    with open(map_path, "w") as w:
        w.writelines(newOutput)

nw.close()

if clean_ninja:
    subprocess.call("ninja -t clean", shell=True)

if subprocess.call("ninja", shell=True) == 1:
    sys.exit(1)
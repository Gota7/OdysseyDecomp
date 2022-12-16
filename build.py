import subprocess
import sys
import os
import pathlib
import shutil

nonmatching_str = ""

if "-non-matching" in sys.argv:
    nonmatching_str = "-DNON_MATCHING"
    print("Non-functions matches will be compiled")

COMPILER_CMD = f"-x c++ -O3 -target aarch64-linux-elf -std=c++11 -stdlib=libc++ -nostdlib -mno-implicit-float -fno-strict-aliasing -fno-short-enums -fdata-sections -mcpu=cortex-a57+fp+simd+crypto+crc -fPIC -g -fno-slp-vectorize -fno-exceptions -Wall {nonmatching_str} -I include -I lib/agl -I lib/al -I lib/eui -I lib/nn -I lib/rs -I lib/sead -c "
COMPILER_PATH = pathlib.Path("tools/clang++.exe")
OBJDUMP_PATH = pathlib.Path("tools/llvm-objdump.exe")

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

for task in tasks:
    source_path, build_path, map_path = task     

    print(f"Compiling {source_path}...")
    if subprocess.call(f"{COMPILER_PATH} {COMPILER_CMD} {source_path} -o {build_path}", shell=True) == 1:
            sys.exit(1)

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
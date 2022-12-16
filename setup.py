import zipfile
import urllib.request
import os
import sys
import subprocess

def install(what):
    subprocess.check_call([sys.executable, '-m', 'pip', 'install', what])

if not os.path.exists("odyssey.nso"):
    print("odyssey.nso does not exist. Place a Captain Toad: Treasure Tracker v1.3.0 NSO named cttt.nso in the root.")
    sys.exit(1)
else:
    print("Found odyssey.nso...")

try:
    import capstone
    print("Found capstone, continuing...")
except ModuleNotFoundError:
    print("Module 'capstone' not installed. Installing...")
    install("capstone")

try:
    import elftools
    print("Found elftools, continuing...")
except ModuleNotFoundError:
    print("Module `elftools` not found. Installing...")
    install("pyelftools")

try:
    import lz4
    print("Found lz4, continuing...")
except ModuleNotFoundError:
    print("Module `lz4` not found. Installing...")
    install("lz4")

try:
    import ninja
    print("Found ninja, continuing...")
except ModuleNotFoundError:
    print("Module 'ninja' not found. Installing...")
    install("ninja")

try:
    import colorama
    print("Found colorama, continuing...")
except ModuleNotFoundError:
    print("Module 'colorama' not found. Installing...")
    install("colorama")

print("Done.")
sys.exit(1)
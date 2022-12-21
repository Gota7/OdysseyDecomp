import csv, math, os, sys, glob

def truncate(number, digits) -> float:
    stepper = 10.0 ** digits
    return math.trunc(stepper * number) / stepper

class Function:
    demangled = ""
    mangled = ""
    isComplete = False
    funcSize = 0

    def __init__(self, demangled, mangled, isComplete, funcSize):
        self.demangled = demangled
        self.mangled = mangled
        self.isComplete = isComplete
        self.funcSize = funcSize

class Object:
    name = ""
    functions = []
    totalFuncs = 0
    totalComplFuncs = 0

    def __init__(self, name):
        self.name = name
        self.functions = list()

    def appendFunction(self, func):
        self.functions.append(func)

        if func.isComplete == "true":
            self.totalComplFuncs += 1

        self.totalFuncs += 1

    def calculateProgress(self):
        fullSize = 0
        doneSize = 0

        for func in self.functions:
            fullSize += func.funcSize

            if func.isComplete == "true":
                doneSize += func.funcSize

        return doneSize, fullSize

    def generateMarkdown(self):
        obj_page = []

        file_name = self.name
        obj_name = os.path.basename(file_name).replace(".csv", ".o")
        
        obj_page.append(f"# {obj_name}\n")
        obj_page.append("| Symbol | Meaning \n")
        obj_page.append("| ------------- | ------------- \n")
        obj_page.append("| :x: | Function has not yet been started or is not matching. \n")
        obj_page.append("| :white_check_mark: | Function is completed. \n")
        obj_page.append("\n\n")

        obj_page.append(f"# {obj_name}\n")
        obj_page.append("| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |\n")
        obj_page.append("| ------------- |  ------------- | ------------- |\n")

        for func in self.functions:
            marker = ":x:"

            if func.isComplete == "true":
                marker = ":white_check_mark:"

            obj_page.append(f"| `{func.demangled}` | `{func.mangled}` | {marker} |\n")

        obj_page_name = file_name.replace(".csv", "")
        obj_page_name = obj_page_name.replace("data/csv/", "docs/")

        rejoined_str = '/'.join(obj_page_name.split('/')[:-1])

        if not os.path.exists(rejoined_str):
            os.makedirs(rejoined_str, exist_ok=True)

        markdown_name = obj_name.replace(".o", ".md")

        full_path = f"{rejoined_str}/{markdown_name}"
        
        with open(full_path, "w") as w:
            w.writelines(obj_page)

func_sizes = { }
objs = []

with open("data/funcSizes.txt", "r") as f:
    lines = f.readlines()

for line in lines:
    spl = line.split("=")
    func_sizes[spl[0]] = spl[1].replace("\n", "")

csv_files = glob.glob("data/csv/al/**/*.csv", recursive=True)

for csv_file in sorted(csv_files, key=str.casefold):
    obj = Object(csv_file)

    with open(csv_file, newline='') as file:
        rdr = csv.DictReader(file)
        
        for row in rdr:
            func = Function(row['Mangled Symbol'], row[' Demangled Symbol'], row[' Is Matched'], int(func_sizes[row['Mangled Symbol'].strip("\n")]))
            obj.appendFunction(func)

    objs.append(obj)

done_size = 0
full_size = 0
TOTAL_GAME_SIZE = 0xA991D8

for obj in objs:
    d, f = obj.calculateProgress()

    done_size += d
    full_size += f
    obj.generateMarkdown()

# with open("data/functions.csv", "r") as f:
#     csvData = f.readlines()

# for c in csvData:
#     spl = c.split(",")
#     isDone = spl[2].replace("\n", "")
    
#     if isDone == "true":
#         funcSize = func_sizes[spl[1]]
#         done_size = done_size + int(funcSize)

prog = (done_size / full_size) * 100.0
print("Progress:")
print(f"{prog}% [{done_size} / {full_size} bytes] ")

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
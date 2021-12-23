# -*- coding: utf-8 -*-

import codecs, json, os, sys

print("Program started.")

# Directory declaration
ready = 0
error = dict()
program_root_dir = os.path.dirname(__file__)
program_root_dir_contents = os.listdir(program_root_dir)
template_dir_path = os.path.join(program_root_dir, "template")

# Add path to sys.path
sys.path.append(program_root_dir)

# Get header file
if "header.py" in program_root_dir_contents:
    try:
        import header
    except ImportError:
        dir_search_list = list()
        for item in program_root_dir_contents:
            if os.path.isdir(item):
                dir_search_list.append(item)
        for path in dir_search_list:
            if "header" in path:
                sys.path.append(path)
                break
            elif path == dir_search_list[-1]:
                error["header_not_found"] = "Could not find `header.py`."
                exit(1)

del dir_search_list

# Integrity check
print("Checking integrity...")

if "manifest" not in program_root_dir_contents:
    print("Could not find `manifest` directory in program root.")
    exit(1)
elif "template" not in program_root_dir_contents:
    os.mkdir(template_dir_path)

if ready:
    print("Checking integrity...")
else:
    print("Integrity check: found %i error%s".format(len(error), ))
    print(*error)
    exit(1)

# Get dependent objects
if "template" in program_root_dir_contents:
    template_dir_contents = os.listdir(template_dir_path)
    
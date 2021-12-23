# -*- coding: utf-8 -*-

import codecs, json, os, sys

print("Program started.")

# Directory declaration
program_root_dir = os.path.dirname(__file__)
program_root_dir_contents = os.listdir(program_root_dir)
template_dir_path = os.path.join(program_root_dir, "template")

# Integrity check
if "manifest" not in program_root_dir_contents:
    print("Could not find `manifest` directory in program root.")
    exit(1)
elif "template" not in program_root_dir_contents:
    os.mkdir(template_dir_path)

# Get dependent objects
if "template" in program_root_dir_contents:
    template_dir_contents = os.listdir(template_dir_path)
    
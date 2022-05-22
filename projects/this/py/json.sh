#! /

# -*- coding: utf-8 -*-
from __future__ import print_function
from __future__ import with_statement

import sys

path = sys.argv[1]
contents = str()

if not path:
    sys.stderr.write("No input file.")
    sys.exit(1)
else:
    with open(path, "r") as file:
        contents = file.read()

print(contents)
sys.exit(0)
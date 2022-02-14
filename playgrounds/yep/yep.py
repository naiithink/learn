import os, sys

home = os.getenv("HOME")
command = sys.argv[1]

if command == "cls":
    print("\033c")
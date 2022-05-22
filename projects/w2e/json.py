import sys

got = dict()

with open("file.json", "r") as file:
    sig_obj = 0
    sig_arr = 0
    for line in file:
        for char in line:
            if char == '{':
                sig_obj = 1
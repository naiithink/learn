string = "eiei"

print(string[0], hex(id(string[0])))
# print(string[1], hex(id(string[1])))
print(string[2], hex(id(string[2])))
# print(string[3], hex(id(string[3])))

print(hex(id(string[0])) == hex(id(string[2])))
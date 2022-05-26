# -*- coding: utf-8 -*-

# recent execution was failed
import json
var = globals()

conv = json.dumps(var)
print(var)

# with open("globals.json", "w") as file:
#     json.dump(conv, file)
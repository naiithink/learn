import ctypes, sys

s = ["Harry", "Ron", "Hermione"]
p = int(id(s[0][0]))
print(p)
sys.exit

q = hex(p + 8)
r = hex(p + 9)

print(ctypes.cast(p, ctypes.py_object).value)

print(ctypes.cast(q, ctypes.py_object).value)
print(ctypes.cast(r, ctypes.py_object).value)
import math

n = 0
fi = ((5 ** 0.5) + 1) / 2
a = float(input(">>> "))

while math.floor(a) > 0:
    a = a / fi
    print("#" * math.floor(a))
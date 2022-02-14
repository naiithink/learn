a, b, c = int(input()), int(input()), int(input())

if a not in range(0, 31) or b not in range(0, 31) or c not in range(0, 41):
    exit(1)

sum = a + b + c

if sum > 79:
    print("A")
elif sum > 74:
    print("B+")
elif sum > 69:
    print("B")
elif sum > 64:
    print("C+")
elif sum > 59:
    print("C")
elif sum > 54:
    print("D+")
elif sum > 49:
    print("D")
else:
    print("F")
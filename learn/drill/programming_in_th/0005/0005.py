stdin = input().split(' ')

o = float(stdin[0])
a = float(stdin[1])

h = ((o ** 2) + (a ** 2)) ** 0.5

print("{:.6f}".format(h))
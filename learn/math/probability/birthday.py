import numpy as np

K = np.array(range(0, 101))
Y = np.array([])

days = 365
day = days
perm = 1

for k in K:
    day = days
    while day >= days - k + 1:
        perm *= day
        day -= 1
    y = 1 - ((perm) // days ** k)
    Y = np.append(Y, y)

print(perm)
print(Y)
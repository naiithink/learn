def shiftElement(ls, n, direction):
    if ls and n and direction:
        if direction == "r":
            product = ("0 " * n) + ls[n:]
        elif direction == "l":
            product = ls[:- (n + 1)] + (" 0" * n)
        return product

ls = "a 12.5 30 dog cat student 498"
n = 3
direction = "l"
print(shiftElement(ls, n, direction))
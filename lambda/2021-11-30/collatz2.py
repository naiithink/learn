a = int(input(">>> "))

while a and a > 1:
    if a % 2:
        a = (a * 3) + 1
    else:
        a = a / 2
    print("#" * int(a))
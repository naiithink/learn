import inspect

char = list(input())
circle = int(input())
i = 0
if circle == 0:
    print("".join(char))
    
elif circle < 0:
    circle = circle * -1
    while i < circle:
        x = char.pop(0)
        char.append(x)
        i += 1
    print("".join(char))
    
elif circle > 0:
    while i < circle:
        x = char.pop()
        char.insert(0,x)
        i += 1
    print("".join(char))


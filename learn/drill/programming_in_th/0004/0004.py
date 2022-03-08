s = input()
res = [0, 0]

for c in s:
    if c.isupper():
        res[0] = 1
    else:
        res[1] = 1

if res[0] and res[1]:
    print("Mix")
elif res[0]:
    print("All Capital Letter")
else:
    print("All Small Letter")
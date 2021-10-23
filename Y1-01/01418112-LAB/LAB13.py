"""def namelist(names):
    product = ""
    if len(names) == 1:
        product += names[0]
    else:
        if names:
            name = len(names) - 1
            indx = 0
            brk = False
            j = 0
            for i in names:
                sep = [", ", " & "]; product += i
                if not brk:
                    if indx == name - 1:
                        j += 1
                    product += sep[j]
                    if sep[j] == " & ":
                        brk = True
                indx += 1
    return product

print( namelist(['Bart']) )
"""

coor = [input().split(","), input().split(",")]
coor = [float(j.strip()) for i in coor for j in i]
coor = [coor[0] + coor[2], coor[1] + coor[3]]
print(*coor, sep=",")
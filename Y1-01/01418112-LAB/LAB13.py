def namelist(names):
    product = ""
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

print( namelist(['Bart', 'Viola', 'Peter', 'Nostel']) )
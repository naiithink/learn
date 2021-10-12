def sumOE(x):
    product = [0, 0]
    
    if x and isinstance(x, int):                                        # To check if x exists and x is an integer
        if x > 0:                                                       # To check if x is a positive integer
            x = str(x)
            for i in x:
                if int(i) % 2:
                    product[0] += int(i)
                else:
                    product[1] += int(i)

    product[0] = str(product[0]); product[1] = str(product[1])
    return print("\n".join(product))

x = 431257380
sumOE(x)
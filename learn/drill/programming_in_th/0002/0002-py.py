fi = 0
n = int(input())

while n:
    A = int(input())

    if not fi:
        m = A
        M = A
        fi += 1
    
    if A < m:
        m = A
    elif A > M:
        M = A

    n -= 1

print(m, M, sep="\n")
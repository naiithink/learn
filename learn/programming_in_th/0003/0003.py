metrices = 2
round = metrices

stdin = input().split(' ')

m = int(stdin[0])
n = int(stdin[1])

res = [[0 for i in range(0, m)] for j in range(0, n)]

i = 0
while round > 0:
    if i == m:
        round -= 1
        i = 0
        if not round:
            break
    
    stdin = input().split(' ')

    for j in range(0, n):
        res[i][j] += int(stdin[j])

    i += 1

for d in range(0, m):
    print(*res[d])
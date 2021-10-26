daysInAMonth = {
    1: 31,
    2: 28,
    3: 31,
    4: 30,
    5: 31,
    6: 30,
    7: 31,
    8: 31,
    9: 30,
    10: 31,
    11: 30,
    12: 31
}

inputDate = [input().split("-")[::-1], input().split("-")[::-1]]
print(inputDate)
if inputDate:
    if inputDate[0][0] == inputDate[1][0]:
        
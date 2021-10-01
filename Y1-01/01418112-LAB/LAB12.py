"""
s, shift, c = input().lower(), 0, ""
for i in s:
    if not shift and i in "-_=.$":
        shift = 1
        continue
    elif not shift:
        c += i
        continue
    if shift and i:
        c += i.upper()
        shift = 0

print(c)
"""

###
"""def camel(phrase, original):
    if len(phrase) < 2:
        return phrase
    if phrase is original:
        for i in phrase:
            if i not in "-_=.$":
                i = i.lower()
            else:
                break
    if phrase[0] in "-_=.$":
        return phrase[1].upper() + camel(phrase[2:], original)
    elif len(phrase):
        return phrase[0] + camel(phrase[1:], original)

s = input()
print(camel(s, s))
"""
"""word = input().lower()
ls = []
ans = ''
i = 0
sym = ['-', '_', '=', '.', '$']
while i < len(word):
if word[i] in sym:
word = word.replace(word[i], ' ')
i += 1
word = word.split(' ')
for j in word:
if j != '':
ls.append(j)
for k in range(len(ls)):
if k != 0:
ls[k] = ls[k].capitalize()
print(''.join(ls))"""

"""
import builtins
import inspect

a = "hap"
b = a.find("")
print(inspect.getsource(input))
"""

"""matrix = []
while True:
    line = input()
    if line == "-1":
        break
    lambda: x = """

"""l1 = [1,2,3,4,5,6,7,8,9]

def convintomatrix(x):

    sqrt = int(len(x) ** 0.5)
    matrix = []
    while x != []:
        matrix.append(x[:sqrt])
        x = x[sqrt:]
    return matrix

print (convintomatrix(l1))"""

"""import multiprocessing

def replace(result, guess):
    for char in result:
        if char == guess:
            return guess
        else:
            return "-"

target = input(); result = ""
while True:
    print("j")
    guess = input()
    check = guess * len(target)
    if guess == "0":
        break
    result = map(replace, guess)
    #print([(result.replace(k, j)) for i in target for j in guess for k in result if i == j])

result = target
print(target)
"""

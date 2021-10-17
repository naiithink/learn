def maxlen(s):
    st = s.split(" ")
    ls = [len(i) for i in st]
    mx = max(ls)
    print(mx, *[i for i in st if len(i) == mx], sep="\n")

s = "Gently down the stream"
maxlen(s)
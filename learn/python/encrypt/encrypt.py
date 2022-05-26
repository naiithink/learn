import xml.etree.ElementTree as ET

with open("/Users/naiithink/projects/private/learn/python/encrypt/file.txt", "rb") as i:
    with open("/Users/naiithink/projects/private/learn/python/encrypt/out.txt", "w") as o:
        # list = i.read()
        for c in i.read():
            o.write(str(bin(c))[2:])
            # print(str(bin(c))[2:], end="")
        # towrite = i.read() + 23
        # o.write(towrite)
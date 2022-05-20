import urllib.request
import hashlib

# req.urlretrieve("https://raw.githubusercontent.com/naiithink/foo/main/a.xml", )

with urllib.request.urlopen("https://raw.githubusercontent.com/naiithink/foo/main/a.xml") as res:
    xml = res.read()

with open("res.xml", "w") as file:
    file.write(xml.decode("utf-8"))

print(xml)
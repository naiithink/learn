import hashlib


with open("/Users/naiithink/projects/private/learn/python/encrypt/file.txt", "rb") as file:
    binary = file.read()
    sum = hashlib.sha256(binary).hexdigest()

with open("/Users/naiithink/projects/private/learn/python/encrypt/file.txt.sha256.digest", "w") as digest:
    digest.write(sum)

def isExist(*, type: "file type", file="") -> int:
    res = 0

print(isExist.__annotations__)
isExist()
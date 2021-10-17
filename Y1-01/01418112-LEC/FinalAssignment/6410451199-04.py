def missing_integer(data):
    data.split(","); data.strip(); ls = list("0123456789"); ls.append("10")
    for i in ls:
        if i not in data and i != ",":
            return i
def is_abecedarian(s):
    ls = list(s)
    if ls == sorted(ls):
        return True
    else:
        return False
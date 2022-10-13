def print_a_returns_one() -> bool:
    print("a")
    return True

def print_b_returns_nought() -> bool:
    print("b")
    return False

if print_a_returns_one() or print_b_returns_nought():
    print("done")
else:
    print("only first")

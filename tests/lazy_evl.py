def print_a_returns_one() -> bool:
    print("a")
    return True

def print_b_returns_nought() -> bool:
    print("b")
    return False

def test() -> bool:
    a = print_a_returns_one()
    b = print_b_returns_nought()

    return a or b

print(test())

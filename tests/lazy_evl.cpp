#include <iostream>

int print_a_returns_one()
{
    std::cout << "a" << std::endl;
    return 1;
}

int print_b_returns_nought()
{
    std::cout << "b" << std::endl;
    return 0;
}

int test() {
    int a = print_a_returns_one();
    int b = print_b_returns_nought();

    return b || a;
}

int main(void)
{
    std::cout << test() << std::endl;

    return 0;
}

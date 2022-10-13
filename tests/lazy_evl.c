#include <stdio.h>

int print_a_returns_one()
{
    printf("a\n");
    return 1;
}

int print_b_returns_nought()
{
    printf("b\n");
    return 0;
}

int test() {
    int a = print_a_returns_one();
    int b = print_b_returns_nought();

    return b || a;
}

int main(void)
{
    printf("%d\n", test());

    return 0;
}

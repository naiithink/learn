#include <iostream>

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

int main(void)
{
    if (print_a_returns_one() || print_b_returns_nought())
        printf("done.\n");
    else
        printf("only first\n");

    return 0;
}

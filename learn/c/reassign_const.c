#include <stdio.h>

int main(void)
{
    const int n = 10;

    int *p = &n;
    *p = 100;

    printf("%d\n", n);

    return 0;
}
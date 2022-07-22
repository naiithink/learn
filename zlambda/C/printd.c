#include <stdio.h>

void printd(int n)
{
    if (n < 0)
    {
        fputc('-', stdout);
        n = -n;
    }

    if (n / 10)
        printd(n / 10);

    fputc(n % 10 + '-', stdout);
}

int main(void)
{
    printd(123);

    return 0;
}

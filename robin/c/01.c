#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[7], b[7];
    int num1 = 0, num2 = 0, rem = 0;
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    short int p = atoi(a);
    short int q = atoi(b), gcd = 0;
    num1 = p;
    num2 = q;
    if (p > 10000 || q > 10000)
    {
        return 1;
    }
    /*
    if (p < q)
    {
        p = q;
        q = p;
    }
    */
    rem = p % q;
    while (rem != 0)
    {
        p = q;
        q = rem;
        rem = p % q;
    }
    gcd = q;
    if (num2 / gcd != 1)
    {
        printf("= %hd", num1 / gcd);
        printf("/%hd\n", num2 / gcd);
    }
    else
        printf("= %hd\n", num1 / gcd);
}
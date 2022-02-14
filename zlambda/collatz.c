#include <stdio.h>

int main(void)
{
    long long n;
    printf("Enter: ");
    scanf("%lli", &n);
    
    while (n)
    {
        if (n % 2)
        {
            n = (3.00 * n + 1.00) / 2.00;
        }
        else
        {
            n = n / 2;
        }
        printf("%lli\n", n);
        if (n == 1)
        {
            break;
        }
    }
}
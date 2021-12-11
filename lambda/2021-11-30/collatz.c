#include <stdio.h>

int main(void)
{
    int a;
    printf(">>> ");
    scanf("%i", &a);
    do
    {
        if (a % 2)
        {
            a = (a * 3) + 1;
        }
        else
        {
            a = a / 2;
        }
        printf("%i\n", a);
    }
    while (a);
}
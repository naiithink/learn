#include <stdio.h>

int main(void)
{
    // {
        int n = 0;
    // }
    
    if (1)
    {
        n = 1;
    }

    if (n == 1)
    {
        printf("%i\n", n);
        return 1;
    }
    else if (n == 0)
    {
        printf("%i\n", n);
        return 2;
    }

    printf("%i\n", n);
}
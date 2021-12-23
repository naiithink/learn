#include <stdio.h>
#include <stdlib.h>

static int n, rev, was_init;

int main(void)
{
    char n_str[10];
    int rem = 0;
    
    if (!was_init)
    {
        fgets(n_str, 10, stdin);
        n = atoi(n_str);
        while (n)
        {
            rev <<= 1;
            if (n & 1)
            {
                rev ^= 1;
            }
            n >>= 1;
        }
        was_init++;
    }

    if (rev)
    {
        rem = rev & 1;
        rev >>= 1;
        printf("%i", rem);
        return main();
    }

    printf("\n");

    return 0;
}
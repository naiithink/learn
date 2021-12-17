#include <stdio.h>

int main(void)
{
    int i = 0;

    {
        int i = 0;

        i += 9;

        printf("%i\n", i);
    }

    printf("%i\n", i);
}
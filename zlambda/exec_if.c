#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = 0, i;

    for (i = 0; i < 9; i++)
    {
        #ifndef EIEI
        #define EIEI 1
        int *p = &i;
        #endif

        if (p)
            *p = i;

        printf("%p\n", &p);
        printf("%d\n", *p);

        /* do something */
    }

    return 0;
}
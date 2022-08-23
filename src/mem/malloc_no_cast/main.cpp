#include <iostream>

#include "tmalloc.h"

int main(void)
{
    int *i;

    i = (int *) allo(6);

    *i = 100;

    printf("%d\n", *i);

    free(i);

    return 0;
}

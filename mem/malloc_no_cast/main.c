#include <stdio.h>
#include <stdlib.h>

#include "tmalloc.h"

int main(void)
{
    int *i;

    i = allo(6);

    *i = 100;

    printf("%d\n", *i);

    free(i);

    return 0;
}

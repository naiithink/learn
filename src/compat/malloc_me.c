#include <stdio.h>
#include <stdlib.h>

#include "malloc_me.h"

void *
malloc_me(int val)
{
    Eiei *res;

    if ((res = malloc(sizeof *res)) == NULL)
    {
        fprintf(stderr, "%s:%s:%d: cannot allocate memory\n", __FILE__, __func__, __LINE__);
        exit(1);
    }

    res->value = val;

    return res;
}

int
demalloc_me(void *chunk)
{
    free(chunk);
}

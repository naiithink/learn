#include <stdio.h>
#include <stdlib.h>

#include "tmalloc.h"

void *
allo(size_t size)
{
    void *res = NULL;

    if ((res = malloc(size)) == NULL)
    {
        fprintf(stderr, "%s:%s:%d: Failed to malloc\n", __FILE__, __func__, __LINE__);
        exit(1);
    }

    return res;
}

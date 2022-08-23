#include <stdio.h>

#include "malloc_me.h"

int main(void)
{
    Eiei *eiei_ptr = NULL;

    eiei_ptr = malloc_me(10);

    printf("%d\n", eiei_ptr->value);

    demalloc_me(eiei_ptr);

    return 0;
}

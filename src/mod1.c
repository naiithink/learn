#include <stdio.h>

#include "../include/mod1.h"

void echo_something(void)
{
    printf("%s, %d\n", __FILE__, __LINE__);
}

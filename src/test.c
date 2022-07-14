#include <stdio.h>

#include "../include/test.h"

void test(void)
{
    fprintf(stderr, "%s:%d: test passed.\n", __FILE__, __LINE__);
}

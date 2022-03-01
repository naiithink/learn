#include <stdio.h>
#include <stdlib.h>

#define SIDES 6
#define R_SIDE (rand() % SIDES + 1)

int main(void)
{
    printf("%d\n", R_SIDE);

    return 0;
}
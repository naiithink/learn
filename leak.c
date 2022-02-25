#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *i;

    i = (int *)malloc(sizeof(int) * 3);

    i[0] = 1;
    i[1] = 2;
    i[2] = 3;

    printf("%d %d %d\n", i[0], i[1], i[2]);

    free(i);
    return 0;
}
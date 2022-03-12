#include <stdio.h>
#include <stdlib.h>

void freeing(int *ptr)
{
    int *res;

    res = (int *) malloc (sizeof(int));
    ptr = res;

    free (res);
}

int main(void)
{
    // int *p;

    // freeing(p);

    // *p = 10;

    // printf("%d\n", *p);

    // *p = 20;

    // printf("%d\n", *p);

    int *x;
    int *temp;

    temp = (int *) malloc (sizeof(int));

    x = temp;

    *x = 10;

    printf("%d\n", *x);

    free (temp);

    printf("%d\n", *x);

    x = realloc (x, sizeof(int));

    *x = 240;
    
    printf("%d\n", *x);

    return 0;
}
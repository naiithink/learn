#include <stdio.h>
#include <unistd.h>

int main(void)
{
    void *first = sbrk(0);
    void *second = sbrk(4096);
    void *third = sbrk(0);

    printf("F: %p\n", first);
    printf("S: %p\n", second);

    int *p = (int *) third + 1;

    printf("...\n");

    *p = 1;

    printf("...\n");

    printf("%d\n", *p);

    return 0;
}

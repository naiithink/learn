#include <stdio.h>

int main(void)
{
    printf("int: %lu\n", sizeof(int));

    int n = 15;
    int m = 10;
    int *pn = &n;
    int *pm = &m;
    char *pc = NULL;

    printf("n: %p\n", pn);
    printf("m: %p\n", pm);

    printf("%i\n", *pn);
    printf("%i\n", *pm);

    pc = (char *) pn + 1;

    printf("n: %p\n", pn);
    printf("m: %p\n", pm);

    printf("%i\n", *pn);
    printf("%i\n", *pm);

    printf("%p\n", *pc);

    return 0;
}

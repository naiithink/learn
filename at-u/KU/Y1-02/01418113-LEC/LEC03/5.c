#include <stdio.h>

int main(void)
{
    void *p;
    char a = 'a';
    printf("p size: %i\n", sizeof(*p));
    printf("p: %c\n", p);
    printf("a size: %i\n", sizeof(a));
    printf("a: %c\n", a);

    char v = *p;

    if (v == '\0')
        printf("eq\n");
    else
        printf("!eq\n");
}
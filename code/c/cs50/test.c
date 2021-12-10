#include <stdio.h>

int main(void)
{
    char *s = "Hello";

    char *t = s;

    t[0] = 'h';

    printf("%p %s\n", *&s, s);
    printf("%p %s\n", *&t, t);
}
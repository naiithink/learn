#include <stdio.h>

int main(void)
{
    char *s1 = "hello, world\0", *s2 = "";

    while (*s2++ = *s1++);

    printf("%s\n", s2);

    return 0;
}
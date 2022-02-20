#include <stdio.h>

int main(void)
{
    char *s1 = "abc";
    char s2[] = "def";

    s2[1] = 'z';

    printf("%s\n", s2);

    return 0;
}
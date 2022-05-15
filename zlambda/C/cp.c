#include <stdio.h>

void cp(char *des, char *src)
{
    while ((*des = *src) != '\0')
    {
        des++;
        src++;
    }
}

int main(int argc, char **argv)
{
    char *t = "hello";
    char *s = "world";

    // while ((*s++ = *t++) != '\0');

    cp(s, t);

    printf("%s\n", s);

    return 0;
}
#include <stdio.h>

char *
test(char *str1, char *str2)
{
    char *inter = str1;
    str2 = inter;

    return str2;
}

int main(void)
{
    char *str = "hello";
    char *print;
    test(str, print);

    printf("%s\n", print);
    return 0;
}
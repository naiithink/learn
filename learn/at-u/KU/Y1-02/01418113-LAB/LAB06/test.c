#include <stdio.h>

int main(void)
{
    char *str = "hello";

    &(str[1]) = 'a';

    printf("%s\n", str);
}
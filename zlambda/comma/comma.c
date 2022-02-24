#include <stdio.h>

#define STR 10

int main(void)
{
    FILE *hello;
    char s1[STR], s2[STR], s3[STR];

    hello = fopen("hello.txt", "r");

    while (fscanf(hello, "%[,][^$]$%s", s1, s2) != EOF);

    printf("%s\n\
%s\n", s1, s2);

    fclose(hello);
    return 0;
}
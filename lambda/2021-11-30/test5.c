#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "eiei";
    string g = "world";
    int h = 42;

    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);

    printf("%s\n", s[4]);
    printf("%c\n", s[5]);
    printf("%c\n", s[6]);
    printf("%c\n", s[7]);
    printf("%c\n", s[8]);
    printf("%c\n", s[9]);
    printf("%c\n", s[10]);
    printf("%c\n", s[11]);
    printf("%c\n", s[12]);
    printf("%c\n", s[13]);
    printf("%c\n", s[14]);
    printf("%c\n", s[15]);

    printf("%p\n", &g[4]);
    printf("%p\n", *&h);

    printf("\n\n");

    string d[] = {"Harry", "Ron", "Hermione"};
    printf("%c\n", d[0][0]);
    printf("%c\n", d[0][1]);
    printf("%c\n", d[0][2]);
    printf("%c\n", d[0][3]);
    printf("%c\n", d[0][4]);
    printf("%c\n", d[0][5]);
    printf("here, %c\n", d[0][6]);

    // printf("%s\n", d[1]);
    // printf("%s\n", d[2]);
}
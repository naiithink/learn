#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    string t = "BYE!";

    printf("%c %c %c %c %c %c %c %c %c\n", s[-2], s[-1], s[0], s[1], s[2], s[3], s[4], s[5], s[6]);
}
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char s[6] = "hello";
    char up[6] = "";
    // char c = 'a';
    int i = 0;

    for (; s[i] != '\0'; i++)
    {
        up[i] = toupper(s[i]);
    }
    up[i] = '\0';

    printf("%s\n", up);

    return 0;
}
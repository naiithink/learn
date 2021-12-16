#include <stdio.h>

int main(void)
{
    char a = '1';
    char b = '2';
    char c = '3';
    char H = '\0';

    int *p = &a;
    char v = *p;
    // int *pn = p;

    int i = 0;
    while (v != '\0')
    {
        printf("%c", *&a);
        p++;
        v = *p;
    }
    printf("\n");
}
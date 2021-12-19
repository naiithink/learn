#include <stdio.h>

int main(void)
{
    char s[10] = "";
    
    printf("Enter: ");
    fgets(s, 10, stdin);

    printf("> %s", s);
    return 0;
}
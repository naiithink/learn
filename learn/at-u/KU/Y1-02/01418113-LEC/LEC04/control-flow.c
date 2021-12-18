#include <stdio.h>

int main(void)
{
    char s[50];
    int i;

    for (i = 0; (s[i] = getchar()) == '\n';)
    {
        s[i] = getchar();
        if (s[i] == '\n')
        {
            break;
        }
        i++;
    }
    s[i] = 0;
    printf("|%s|\n", s);

    return 0;
}
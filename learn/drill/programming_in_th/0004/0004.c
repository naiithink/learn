#include <stdio.h>

int main(void)
{
    char s[10001];
    int cases[] = { 0, 0 };

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] <= 90)
        {
            cases[0] = 1;
        }
        else
        {
            cases[1] = 1;
        }
    }

    if (cases[0] && cases[1])
    {
        printf("Mix\n");
    }
    else if (cases[0])
    {
        printf("All Capital Letter\n");
    }
    else
    {
        printf("All Small Letter\n");
    }

    return 0;
}
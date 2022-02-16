#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char *string = "hello";
    char str[n];

    for (int i = 0; i < n; i++)
    {
        str[i] = string[i];
        if (string[i] == '\0')
            break;
    }

    printf("%s\n", str);

    return 0;
}
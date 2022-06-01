#include <stdio.h>

typedef int (*PFI)(char *);

int the_strlen(char *);

PFI p_the_strlen = &the_strlen;

int main(void)
{
    printf("%i\n", the_strlen("hello"));
    printf("%i\n", (*p_the_strlen)("hello"));
    return 0;
}

int the_strlen(char *s)
{
    int res = 0;

    for (int i = 0; s[i] != '\0'; ++i)
        res++;

    return res;
}

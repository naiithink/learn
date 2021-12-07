#include <stdio.h>

int main(void)
{
    char a = '\0';
    int pa = &a;
    char *b = "";
    void *c = NULL;
    if (pa == c)
    {
        printf("equivalent\n");
    }
    else
    {
        printf("not equivalent\n");
    }
    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(b));
    printf("hello%sworld\n", "");
    printf("%lu\n", sizeof(void));
    printf("%lu\n", sizeof(a));
}
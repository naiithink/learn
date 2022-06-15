#include <stdio.h>

int main(void)
{
    int n = 3;

    while (--n > 0)
        printf("hello, "); printf("world\n");
    
    printf("---\n");
    
    for (int i = 0; i < 3; ++i)
        printf("hello, "); printf("world\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;

    while(1)
    {
        printf("hello, world\n");
        fgets(&c, sizeof(char), stdin);

        if (c == '\003')
        {
            printf("Okay!\n");
            return 0;
        }
    }

    return 0;
}
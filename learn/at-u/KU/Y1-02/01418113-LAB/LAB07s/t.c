#include <stdio.h>

int main(void)
{
    int j = 1;

    for (int i = 0; i < 10; i++)
    {
        j = !j;
        if (j)
            printf("%d\n", j);
        else
            printf("%d\n", j);
    }

    return 0;
}
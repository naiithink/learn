#include <stdio.h>

int main(void)
{
    int x[50];

    for (int i = 0; scanf("%d\n", &x[i]) != EOF; i++);

    for (int i = 0; i < 50; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}
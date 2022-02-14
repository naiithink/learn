#include <stdio.h>
#include <stdlib.h>
int main()
{
    char N[6];
    fgets(N, sizeof(N), stdin);
    int N_str = 0, i = 0;
    N_str = atoi(N);
    if (N_str <= 0 || N_str > 26)
        printf("-\n");
    else
    {
        for (i = N_str - 1; i > 0; i--)
        {
            printf("%c-", 'a' + i);
        }
        for (i = 0; i < N_str; i++)
        {
            if (i == 0)
                printf("%c", 'a');
            else
                printf("-%c", 'a' + i);
        }
        printf("\n");
    }
}
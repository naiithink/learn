#include <stdio.h>

int main(void)
{
    int m = 0, n = 0, metrices = 2, round = metrices;
    
    scanf("%d %d", &m, &n);

    int buf = 0, res[m][n];

    for (int i = 0; round > 0; ++i)
    {
        if (i == m)
        {
            round--;
            i = 0;
            if (!round)
            {
                break;
            }
        }

        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &buf);

            if (round == metrices)
            {
                res[i][j] = buf;
            }
            else
            {
                res[i][j] += buf;
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
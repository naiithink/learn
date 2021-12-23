#include <stdio.h>
#include <stdlib.h>

static char comple = '-';

void printChars(int n, int breakpoint)
{
    int i = n, loop = 0, switcher = -1;
    while (1)
    {
        printf("%c", i+96);

        if (i == breakpoint)
        {
            if (n == breakpoint)
            {
                printf("\n");
                break;
            }
            switcher *= -1;
            loop++;
        }
        else if (loop == 1 && i == n)
        {
            printf("\n");
            break;
        }

        printf("%c", comple);
        i += switcher;
    }
}

int findLim(int n)
{
    return ((2 * n) - 1) + ((n - 1) * 2);
}

int main(void)
{
    char n_str[3];
    int n;

    // fgets(n_str, 3, stdin);
    n = 4; // atoi(n_str);

    if (n > 26 || n <= 0)
    {
        printf("%c\n", comple);
        return 1;
    }

    int cols = findLim(n), onRow = 0;
    printf("%i\n", cols);
    while (1)
    {
        for (int sec = 0; sec < 3; sec++)
        {
            int lim = (cols - findLim(onRow+1)) / 2;
            if (sec == 1)
            {
                printChars(n, cols-(2*lim));
            }
            else
            {
                for (int j = 0; j < lim; j++)
                {
                    printf("%c", comple);
                }
            }
        }
        printf("\n");
        if (onRow == (2 * n) - 2)
        {
            break;
        }
        onRow++;
    }

    return 0;
}
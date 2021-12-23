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
    char N_str[3];
    int N;

    // fgets(n_str, 3, stdin);
    N = 4; // atoi(n_str);

    if (N > 26 || N <= 0)
    {
        printf("%c\n", comple);
        return 1;
    }

    int width = findLim(N), row = 0, loop = 0, bounce = -1, bound;

    while (!loop)
    {
        for (int sec = 0; sec < 3; sec++)
        {
            bound = width - findLim();
            if (!(sec%2))
            {
                for (int indx = 0; indx < bound; indx++)
                {
                    printf("%c", comple);
                }
            }
            else
            {
                printChars(N, N-row);
            }
        }
        printf("\n");
        row++;
        loop++;
        
        if ()
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    char sym = '*', col_str[5], row_str[5];
    int col, row, bound, loop = 0;

    /*
    fgets(row_str, 5, stdin);
    fgets(col_str, 5, stdin);

    row = atoi(row_str);
    col = atoi(col_str);
    */

    row = 6;
    col = 4;

    if (row < 4 || col < 4)
    {
        return 1;
    }

    if (row - col >= 0)
    {
        bound = row;
    }
    else
    {
        bound = col;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < bound; j++)
        {
            // printf("%i %i\n", i, j);
            
            if (i == j || i == col+loop || i == 0 || i == col-1)
            {
                printf("%c", sym);
            }
            else
            {
                printf("%c", 32);
            }
        }
        printf("\n");
        loop++;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);

    int x = atoi(x_str);
    int y = atoi(y_str);

    //

    char dim_x[6] = "00000", dim_y[6] = "00000", sep = '-';

    if (x == y && y == 0)
    {
        printf("Center\n");
        return 0;
    }

    if (x > 0)
    {
        dim_x[0] = "east";
    }
    else if (x < 0)
    {
        dim_x[0] = "west";
    }

    if (y > 0)
    {
        dim_y[0] = "north";
    }
    else if (y < 0)
    {
        dim_y[0] = "south";
    }

    if (! x || ! y)
    {
        sep = '\0';
        if (! x)
        {
            dim_x[0] = '\0';
            dim_y[0] = dim_y[0] - 32;
        }
        else if (! y)
        {
            dim_y[0] = '\0';
            dim_x[0] = dim_x[0] - 32;
        }
    }

    printf("%s%c%s\n", dim_x, sep, dim_y);

    //

    return 0;
}
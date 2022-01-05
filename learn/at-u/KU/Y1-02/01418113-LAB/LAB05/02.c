#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char num_str[5];
    float num = 0.0, c = 0.0, b = 0.0, a = 0.0, rem = 0.0;
    fgets(num_str, sizeof(num_str), stdin);
    num = atof(num_str);

    for (c = pow(num, 2.0); c > 0.0; c--)
    {
        for (a = 2.0; pow(a, 2.0) < pow(c, 2.0); a++)
        {
            a = pow(a, 2.0);
            b = pow((a + b), 0.5);
            rem = b - ((b / 2.0) * 2.0);
            if (!rem && a < b && b < c && (num = a + b + c))
            {
                printf("(%.0f, %.0f, %.0f)\n", a, b, c);
                return 0;
            }
        }
    }
    printf("No triple found.\n");

    return 0;
}
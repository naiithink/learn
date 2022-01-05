#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define STDIN_NUM_SIZE 10

int main(void)
{
    char num_str[STDIN_NUM_SIZE];
    double n = 0.0, c = 0.0, b = 0.0, a = 0.0, ctl = 1.0, sine = 0.0, sum = 0.0;

    fgets(num_str, sizeof(STDIN_NUM_SIZE), stdin);
    n = atof(num_str);

    if (n < 0.0)
        ctl = -1.0;

    for (c = 1.0; c < n; c += ctl)
    {
        for (b = 1.0; b < c; b += ctl)
        {
            for (a = 1.0; a < b; a += ctl)
            {
                printf(">>> (%lf, %lf, %lf)\n", a, b, c);
                sum = a + b + c;
                if (((double) a / (double) c) >= sin(M_PI / 3.0))
                    continue;
                else if (n == sum && c == (pow ((pow (a, 2.0) + pow (b, 2.0)), 0.5)))
                {
                    printf("(%lf, %lf, %lf)\n", a, b, c);
                    return 0;
                }
            }
        }
    }
    printf("No triple found.\n");
    
    return 1.0;
}
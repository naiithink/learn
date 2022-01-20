#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

#define STDIN_NUM_SIZE 10

int main(void)
{
    char num_str[STDIN_NUM_SIZE];
    int n = 0, c = 0, b = 0, a = 0, ctl = 1, sine = 0, sum = 0;

    fgets(num_str, sizeof(STDIN_NUM_SIZE), stdin);
    n = atof(num_str);

    if (n < 0)
        ctl = -1;

    for (c = 1; c < n; c += ctl)
    {
        for (b = 1; b < c; b += ctl)
        {
            for (a = 1; a < b; a += ctl)
            {
                sum = a + b + c;
                if (((int) a / (int) c) >= sin(M_PI / 3.0))
                    continue;
                else if (n == round(sum) && c == (pow ((pow (a, 2.0) + pow (b, 2.0)), 0.5)))
                {
                    printf("(%i, %i, %i)\n", a, b, c);
                    return 0;
                }
            }
        }
    }
    printf("No triple found.\n");
    
    return 1;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

#define STDIN_NUM_SIZE 10

int main(void)
{
    FILE *out_f;
    out_f = fopen("/Users/naiithink/volumes/mountable/Git/private/learn/at-u/KU/Y1-02/01418113-LAB/LAB05/02_out.txt", "a");
    if (!out_f)
    {
        printf("Could not create a file pointer.\n");
        return 1;
    }

    char num_str[STDIN_NUM_SIZE];
    int n = 0, c = 0, b = 0, a = 0, ctl = 1, sine = 0, sum = 0;

    fgets(num_str, sizeof(STDIN_NUM_SIZE), stdin);
    n = atof(num_str);

    if (n < 0)
        ctl = -1;

    fprintf(out_f, ">>> %i\n\n", n);
    for (c = 1; c < n; c += ctl)
    {
        for (b = 1; b < c; b += ctl)
        {
            for (a = 1; a < b; a += ctl)
            {
                fprintf(out_f, ">>> (%i, %i, %i)\n", a, b, c);
                sum = a + b + c;
                if (((int) a / (int) c) >= sin(M_PI / 3.0))
                    continue;
                else if (n == round(sum) && c == (pow ((pow (a, 2.0) + pow (b, 2.0)), 0.5)))
                {
                    printf("(%i, %i, %i)\n", a, b, c);
                    fprintf(out_f, "(%i, %i, %i)\n\n", a, b, c);
                    fclose(out_f);
                    return 0;
                }
            }
        }
    }
    printf("No triple found.\n");
    fprintf(out_f, "No triple found.\n\n");

    fclose(out_f);
    
    return 1;
}
#include <stdio.h>

/* double pow(double x, double y); */

int main(void)
{
    float o = 0.0, a = 0.0, h = 0.0, f = 0.0, pow = 0.0;

    scanf("%f %f", &o, &a);

    f = (o * o) + (a * a);

    printf(":: %f\n", f);

    while (pow != f)
    {
        pow = h * h;
        if (pow <= f)
        {
            h = pow;
        }
        else
        {
            h += 1;
        }
        printf("%f\n", h);
    }

    printf("%.6f\n", h);

    return 0;
}
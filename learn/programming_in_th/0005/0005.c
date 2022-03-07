#include <stdio.h>
#include <math.h>

/* double pow(double x, double y); */

int main(void)
{
    double o = 0.0, a = 0.0, h = 0.0;

    scanf("%lf %lf", &o, &a);

    h = pow(((o * o) + (a * a)), 0.5);

    printf("%.6lf\n", h);

    return 0;
}
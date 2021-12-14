#include <stdio.h>

int main()
{
    float f = 499.99;
    double g = 499.99;
    
    printf("%f\n", f);
    printf("%.2f\n", f);
    printf("%.3f\n", f);
    printf("%.30f\n\n", f);

    printf("%lf\n", g);
    printf("%.2lf\n", g);
    printf("%.3lf\n", g);
    printf("%.30lf\n", g);
}

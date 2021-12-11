#include <stdio.h>
#include <math.h>

float poww(float a, float b);

void main(void)
{
    float a;
    double fi = ((poww(5, 0.5)) + 1) / 2;
    printf(">>> ");
    scanf("%f", &a);
    do
    {
        a = a / fi;
        for (int n = floor(a); n > 0; n--)
        {
            printf("#");
        }
        printf("\n");
    }
    while (floor(a) > 0);
}

float poww(float a, float b)
{
    for (int n = 0; n < b; n++)
    {
        a = a * a;
    }
    return a;
}
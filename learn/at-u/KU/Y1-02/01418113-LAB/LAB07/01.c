#include <stdio.h>

int main(void)
{
    // float f = 2, g = 4, h, z;
    // int i = 3, j = 1, a = 4, b = 3, c;

    int a = 4, b = 3, c, d, e, z = 2;
    float f = 2, g = 5, h, i, j, k;

    c = f / b * f;                  /* c = ? */
    // h = a++ / (float)b;             /* h = ? */
    // j = (float)c / h--;             /* j = ? */
    // d = b * h / c;                  /* d = ? */
    // i = d * f + h--;                /* i = ? */
    // e = a * d++ / i;                /* e = ? */
    // k = (int)i * d / (float)a;      /* k = ? */

    printf("int: %d\n\
float: %f\n", c, c);

    printf("%09d\n", 11, "eiei");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
// #include <unistd.h>
// #include <math.h>

int main(int argc, char **argv)
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int gcd = 1;

    while (1)
    {
        while (a != 0 && b != 0)
        {
            if (a == 0)
            {
                break;
            }

            b -= (b/a) * a;

            if (b == 0)
            {
                break;
            }

            b -= (a/b) * b;
        }

        gcd = a + b;
        printf("%i\n", gcd);

        if (gcd <= 1)
        {
            break;
        }

        a /= gcd;
        b /= gcd;
    }

    printf("%i/%i\n", a, b);

    return 0;
}
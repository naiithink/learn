#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        fprintf (stderr, "Requires 1 argument.\n");
        return 1;
    }

    unsigned int n = argv[1];

    if (n <= 3)
    {
        fprintf (stderr, "Invalid input. argv[1] ::= [0-9] && .\n");
        return 1;
    }

    unsigned long long int k = 0;
    unsigned long long int p = 0;
    unsigned long long int q = 0;
    double c = 0.0;

    for (int i = 0; i <= n;)
    {
        c = (float) i / (p * q);

        if (c)
        {
            continue;
        }
        else
        {
            break;
        }

        for (int j = 2, k = 2; j < p || k < q;)
        {
            if (p % j)
            {
                j++;
            }

            if (q % k)
            {
                k++;
            }
        }

        k = p * q;

        while (k)
        {
            k /= 10;
            i++;
        }

        if (i == n)
        {
            break;
        }
    }

    printf("\
n: %d\n\
k = %lld\n\
p = %lld\n\
q = %lld\n", n, k, p, q);

    return 0;
}
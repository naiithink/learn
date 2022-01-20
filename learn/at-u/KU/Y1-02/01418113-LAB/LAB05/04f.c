#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE_T 10

int main(void)
{
    char n_s[STR_SIZE_T];
    int n = 0;
    double res = 0.0, ctl = 1.0;

    printf("Enter n: ");
    fgets(n_s, STR_SIZE_T, stdin);
    n = atoi(n_s);
    if (n <= 0)
        return 1;
    
    for (int i = 0; i < n; i++)
    {
        res += (4.0 / (1.0 + (i + 1.0 - 1.0) * 2.0)) * ctl;
        ctl *= -1.0;
    }

    printf("%.10lf\n", res);

    return 0;
}
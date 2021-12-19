#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float f = 0.1;

    if (f == (1 / 10))
    {
        return 1;
    }
    else
    {
        return 2;
    }

    printf("%.20f\n", f);

    return 0;
}
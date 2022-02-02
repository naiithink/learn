#include <stdio.h>

int main(void)
{
    int n = 10;
    int *p1 = &n;
    int **p2_c = &p1;
    int **p2_c_c = &p2_c;

    if (p2_c_c == p2_c)
        return 1;
    else
        return 2;

    return 0;
}
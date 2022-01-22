#include <stdio.h>

void test(int x[][4], char c, int i, int j)
{
    x[i][j] = c;
}

int main(void)
{
    int x[2][4];
    int a = 123;
    int b = 124;
    int *p1 = &a;
    // int p2[][8] = &b;

    test(x, 'a', 0, 0);

    printf("%c\n", x[0][0]);

    return 0;
}
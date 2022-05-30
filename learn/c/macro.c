#include <stdio.h>

#define square1(x) x * x
#define square2(x) (x) * (x)

int main(void)
{
    /* 1 + 1 * 1 + 1 */
    printf("%d\n", square1(1+1));

    /* (1 + 1) * (1 + 1) */
    printf("%d\n", square2(1+1));

    return 0;
}

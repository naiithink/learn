#include <stdio.h>

int main(void)
{
    int nest = /*/*/ 0 * /**/ 1;

    printf("%d\n", nest);

    return 0;
}
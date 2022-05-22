#include <stdio.h>

#define XOR_ONE(x) (x ^ 1)

int main(int argc, char **argv)
{
    printf("%d\n", XOR_ONE(12));
    return 0;
}
#include <stdio.h>

#define ECH0(...) printf(__VA_ARGS__), printf("\n")

int addOne(int);

int main(void)
{
    ECH0("%s%s%s", "hello", "world", "eiei");
    return 0;
}

int addOne(int n)
{
    return n + 1;
}

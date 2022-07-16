#include <stdio.h>

void say_hello(int n)
{
    printf("%02d hello, world\n", n);
}

int main(void)
{
    void (*f[])(int) = { &say_hello };

    return 0;
}

#include <stdio.h>
#include <unistd.h>

void say_hello(void)
{
    printf("hello, world\n");
}

void say_hi(void)
{
    printf("hi, world\n");
}

void invoke(void (*f[])(void), int n_func)
{
    for (int i = 0; i < n_func; ++i)
        (*f[i])();
}

int main(void)
{
    void (*f[])(void) = { &say_hello, &say_hi };
    invoke(f, 2);

    void (*fp)(void) = &say_hello;

    (*fp)();

    return 0;
}

#include <stdio.h>

#define A 0x01
#define B 0x02
#define C 0x04

void say_hello(int);

int main(void)
{
    say_hello(A | C);
    say_hello(A | B);

    return 0;
}

void say_hello(int opts)
{
    if (opts & A)
        printf("A ");

    if (opts & B)
        printf("B ");

    if (opts & C)
        printf("C ");

    printf("\n");
}

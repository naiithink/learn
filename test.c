#include <stdio.h>
#include <stdlib.h>

typedef void *(*func_exp)(void *);
typedef void ((*func_exp_a)(void *))[];

int _n(int x)
{
    return ++x;
}

int main(void)
{
    func_exp x; // malloc(sizeof(func_exp *));
    func_exp_a n; // malloc(sizeof(func_exp *));

    x = &_n;
    n = { (*x)(1) };

    printf("%zu\n", sizeof(func_exp));

    return 0;
}

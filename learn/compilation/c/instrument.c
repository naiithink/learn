#include <stdio.h>

void __cyg_profile_func_enter(void *, void *) __attribute__((no_instrument_function));
void __cyg_profile_func_exit(void *, void *) __attribute__((no_instrument_function));

void __cyg_profile_func_enter(void *f, void *caller)
{
    printf("--> about to run %p from %p\n", f, caller);
}

void __cyg_profile_func_exit(void *f, void *caller)
{
    printf("<-- exited %p that was called from %p\n", f, caller);
}

void echo1(void)
{
    printf("1.\n");
}

void echo2(void)
{
    printf("2.\n");
}

int main(void)
{
    echo1();
    echo2();
    printf("hello, world\n");
    return 0;
}
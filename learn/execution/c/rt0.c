#include <stdio.h>
#include <stdlib.h>

char hello(void);

void
_start(void)
{
    int exit_status = 1;
    char buff;

    buff = hello();

    exit_status = buff ^ 't';
    exit(exit_status);
}

char
hello(void)
{
    printf("hello, world\n");
    return 'f';
}
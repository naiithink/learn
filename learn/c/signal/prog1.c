#include <signal.h>
#include <stdio.h>

int handler(int options);
int (*handler_pre) = (&handler)();

int main(int argc, char **argv)
{
    signal(SIGINT, (handler)());

    return 0;
}

int handler(int options)
{
    fprint (stderr, "handler of prog1\n");
    exit(1);
}
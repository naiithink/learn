#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void terminate(void);

extern int loopn;

int loopd(void)
{
    signal(SIGINT, terminate);

    while (1)
        loopn++;

    return 0;
}

void terminate(void)
{
    fprintf (stderr, "About to exit...\n");
    exit(1);
}
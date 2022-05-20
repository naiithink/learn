#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>

int
main (int argc, char **argv)
{
    if (argc == 1)
    {
        fprintf (stderr, "No data passed.\n");
        return 1;
    }

    for (int i = 1, lim = argc+1; i < lim; ++i)
    {
        argv[]
    }

    return 0;
}
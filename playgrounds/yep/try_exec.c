#include <stdio.h>
#include <stdlib.h>
#include <sys/errno.h>
#include <unistd.h>

#include "yep.h"

static exit_status = -1;

int main(int argc, char **argv)
{
    yep_ok ok = dne;

    if (argc < 2)
        ok = false;
    else
{

}

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}
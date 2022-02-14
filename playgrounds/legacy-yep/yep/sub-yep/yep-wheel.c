#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// #include <stdarg.h>
#include <sys/dir.h>
#include <sys/param.h>
#include <sys/types.h>
// #include <time.h>
#include <unistd.h>

// #include "yep.h"

int
main (int argc, char **argv)
{
    if (argc == 1)
        exit(EXIT_FAILURE);

    int fd[3];

    if ( (pipe(fd)) < 0 )
        exit(EXIT_FAILURE);

    

    write (fd[1], argv[1], sizeof(argv[1]));
    write (fd[1], argv[2], sizeof(argv[2]));
    write (fd[1], argv[3], sizeof(argv[3]));

}
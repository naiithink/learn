#include <stdio.h>
#include <stdlib.h>


char *hello(int argc, char **argv);

#define STR_MAX 255
#define TRUE "t"

extern int exit_status;

void
_start(int argc, char **argv)
{
    char *buff = (char *) malloc (sizeof(char) * 2);

    if (buff == NULL)
    {
        fprintf(stderr, "Could not allocate buffer for the return value of hello().\n");
        exit(2);
    }

    buff = hello(argc, argv);

    exit_status = buff[0] & 116;

    free(buff);
    exit(exit_status);
}
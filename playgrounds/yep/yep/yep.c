/*
    ADD: Valgrind
    Lists: ~/lists/
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/errno.h>
#include <unistd.h>
#include <time.h>
// #include <yaml.h>

#include "yep.h"

#if (defined YEP_IS_IN && defined YEP_IS_ON)
#define SUPPORTED_PLATFORM 1
#else
#define SUPPORTED_PLATFORM 0
#endif

typedef void (*CallFunction)(int);
CallFunction *functions = {&write_log, &get_ref_line};                              // ~/lists/function_index.json

typedef char *string;

int
main (int argc, char **argv)
{
    time_t *pstart;

    if (! SUPPORTED_PLATFORM)
    {
        write_log ();

    }

    int days_before_dooms = doomsday();
}

BYTE_SIZE
get_native_size ()
{
    BYTE_SIZE native_size;
    native_size.CHAR = sizeof(char);
    native_size.INT = sizeof(int);
    native_size.LONG = sizeof(long);
    native_size.FLOAT = sizeof(float);
    native_size.DOUBLE = sizeof(double);
    return native_size;
}

void
write_log (int yep_pid, char *decorator)
{
    char *extension = ".log";
    unsigned int total_alloc_size = sizeof(time_t) + sizeof(extension) + sizeof(decorator);
    unsigned int *log_filename = malloc(total_alloc_size);

    for (int i = 0; i < total_alloc_size; i++)
    {

    }

    FILE *logfile;
    
    logfile = fopen (".log");
}

void
get_ref_line ()
{
    
}

int
doomsday_warn ()
{
    unsigned int byte_size = sizeof(time_t);
    time_t elapsed_sec;
    time(&elapsed_sec);
    unsigned long remain_secs = 1<<byte_size;
}

void
cleanup ()
{
    
}
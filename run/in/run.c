#include <stdio.h>
#include <stdlib.h>

#define PROGRAM_NAME "yep"
#define AUTHORS "naiithink"
#define PROGRAM_VERSION "1.0"

#define RESET "\033[39;49m"
#define BOLD "\033[1m"
#define F_RED "\033[31m"
#define F_GREEN "\033[32m"
#define F_YELLOW "\033[33m"
#define F_BLUE "\033[34m"
#define F_MAGENTA "\033[35m"
#define F_SPRING_GREEN "\033[36m"
#define F_WHITE "\033[37m"

typedef enum { false, true, dne } OK;

static int exit_status;

void
raise_helper (void);

int
main (int argc, char **argv)
{
    OK ok = true;

    if (argc == 1)
    {
        raise_helper ();
        ok = false;
    }
    else
    {
        
    }

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

void
raise_helper (void)
{
    fprintf (stderr, "\
%%BOLDyep Help\n\
", );
}
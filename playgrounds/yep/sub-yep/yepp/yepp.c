#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "yep.h"

// Used as the shell alias
#define PROGRAM_NAME "yep"

// yep properties
#define FILE_NAME "yep.c"
#define PROGRAM_VERSION 
#define YEP_ISSUE_REPORT "https://github.com/naiithink/foo-i/issues"

#if (defined YEP_IS_IN && defined YEP_IS_ON)
#define SUPPORTED_PLATFORM 1
#else
#define SUPPORTED_PLATFORM 0
#endif

// Platform info
typedef struct
{
    char *os;
    char *arch;
    enum {os, arch, BOTH, END} *error;
}
platform;


void yepp_helper (void);

static exit_status;

int
main (int argc, char **argv)
{
    ok_status ok;
    clock_t start, end;

    // Program start time
    start = clock();

    if (!argv[1])
    {
        yepp_helper ();
        ok = no;
    }
    else
    {

    }

    // Program almost-end time
    end = clock();

    // CPU elapsed time
    double elapsed = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f s\n", elapsed);

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

void
about_yepp (void)
{
    fputs ("\
    yepp is a yep extension that help you manager you packages.\n\
", stdout);
}

void
yepp_helper (void)
{

}
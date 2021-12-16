#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

void yep_about (void);
void yep_helper (void);

typedef enum {no, yes} yep_status;

static int exit_status;

int
main (int argc, char **argv)
{
    yep_status ok;

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            if (argv[i][0] == '-')
            {
                char *option;

                if (argv[i][1] == '-' && argv[i][2] != '-')
                {
                    int j = 0;

                    while (argv[i][j] != '\0')
                    {
                        option = argv[i][j] = argv[i][j];
                    }
                }
            }
        }
    }
    else
    {
        yep_helper ();
        ok = no;
    }

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

void
yep_about (void)
{
        fputs("\
\n\
    yep: about\n\
\n\
    The Yank Execute Print Program.\n\
    Created on earth by human.\n\
    Issue report: https://github.com/naiithink/yep/issues\n\
\n\
    Version: (-1) -- lite, test-flight\n\
    eiei.\n\
\n\
", stdout);
}

void
yep_helper (void)
{
        fputs("\
\n\
    yep: help\n\
\n\
    Synopsis\n\
    yep [options] [command_string | file]\n\
\n\
    Options\n\
    --about             About this yep.\n\
    -h | --help         Display a help message.\n\
    --learn-cli         Learn how to use the command line interface.\n\
    --switch_lang       Switch the program display language (EN | TH).\n\
\n\
", stdout);
}
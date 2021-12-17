#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// #include "yep.h"

#define PROGRAM_NAME "yep"

void yep_about (void);
void yep_help (int help_page_index);

// May be use `getopt ()` including in `unistd.h` instead.
int *get_options (int arg_c, char **arg_v);

typedef enum { no, yes } ok_status;
typedef struct
{
    int opt_index;
    char *opt_file;
}
option_props;

enum yep_options {  about,          \
                    help,           \
                    learn_cli,      \
                    switch_lang     \
};

static int exit_status;

int
main (int argc, char **argv)
{
    ok_status ok;
    int optc;

    // while ((optc = getopt(argc, argv )))
    {

    }

    if (argc > 1)
    {
        
    }
    else
    {
        yep_help (-1);
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
    For full version, THB129 / month. - Just kidding.\n\
    eiei.\n\
\n\
", stdout);
}

void
yep_usage ()
{
    fputs ("\
    \n\
    yep: usage\n\
    \n\
    \n\
    \n\
", stdout);
}

void
yep_help (int help_page_index)
{
    // Corresponding to `enum yep_options`.
    if (help_page_index == -1)
    {
        fputs("\
\n\
    yep: help\n\
\n\
    Synopsis\n\
    yep [options] [command_string | file]\n\
\n\
    Options\n\
    --about                 About this yep.\n\
    -h | --help             Display a help message.\n\
    --learn-cli             * Learn how to use the command line interface.\n\
    --switch_displang       * Switch the program display language (EN | TH).\n\
    \n\
    * coming this eternal.\n\
\n\
", stdout);
    }
    else
    {

    }
}

/*
int *
get_options (int arg_c, char **arg_v)
{
    // result = {int options count, enum yep_option [1], enum yep_option [2], ...}
    int *result;
    for (int i = 1; i < arg_c; i++)
    {
        if (arg_v[i][0] == '-')
        {
            char *option;
            int option_start_index;
            int option_counter = 0;

            if (arg_v[i][1] == '-' && arg_v[i][2] != '-')
            {
                {
                    int j = 0, option_index;

                    while (arg_v[i][j] != '\0')
                    {
                        option[j] = arg_v[i][j];
                    }

                    enum yep_options option_index = option;

                    if (option_index > -1)
                    {
                        option_counter++;
                        option[option_counter] = option;
                    }
                }
            }
            else
            {
                option_start_index = 1;
            }
        }
    }

    return result;
}
*/
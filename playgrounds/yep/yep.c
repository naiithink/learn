/*
    Flag types:
    (1): `-*`
    (2): `--*`
*/

/*
    Headnotes
    =========
    LD: 2021-12-06, :193

    - R?    .*rc, json
    - TO    mv system() popen()
*/

#include <stdio.h>
#include <stdlib.h>

// ** #include "yep.h"

#define PROGRAM_NAME "yep"

#define AUTHORS proper_name "NULL"                              // ??/ ??*

#define FLAG "-"                                                // char
#define ERROR_ECHO_INDEX "^"                                    // char

typedef struct
{
    char *filetype;
    char *handler;
}
phandling;

/*
    Note:
    At the time, handler option flag is `-m`.
*/

typedef struct
{
    char *opt;
    char *val;
}
opts;
                                                                // dd฿
/*
                                                                // ฿
void usage (int status);
                                                                // dd฿
*/
                                                                // ฿
int find_a_char (char c, char *string);                         // ** replace `system()`
int find_str_len (char *string);
char *find_hander (char *extension);

int
main (int argc, char **argv)
{
    char c;
    phandling mgr;
    opts flags;
    int flag_count = 0;
    static char *flag;
    static char *fval;                                          // Option value

    // Search for flags.
    for (int i = 0; i < argc; i++)
    {
        c = argv[i][0];
        if ((int) c == (int) FLAG)
        {   
                                                                // dd฿
            /*  Flag type 2 `--flag`
                                                                // ฿
            if ((int) argv[i][1] == (int) FLAG)
            {
                // Flag type 2
            }
            else
            {
                // Flag type 1
                                                                // dd฿
            */
                                                                // ฿
                // Declare char index counter.
                int n = 0;

                // Get option string.
                while ((int) argv[i][n] != 32 && (int) argv[i][n] != (int) '\0')
                {
                    flag[n] = argv[i][n];
                }

                // Reset char index counter.
                n = 0;

                // Check if the next cl arg exists, if so, continue getting its value (end if/...).
                if (i+1 < argc)
                {
                    i++;
                }
                else
                {
                    int echo_index = 0;
                    int invalid_flag_char_index;

                    // Raise flag error then terminate the whole program.
                    printf ("No option was found from %s\n.", flag);

                    // Echo user tty in.
                    for (int j = 0; j < argc; j++)
                    {
                        printf ("%s", argv[j]);
                        echo_index = echo_index + find_str_len (argv[j]);
                        if (j != argc-1)
                        {
                            printf ("%c", 32);
                            echo_index++;

                            // Get first char index of invalid argv.
                            if (j == i)
                            {
                                invalid_flag_char_index = echo_index + 1;
                            }
                        }
                    }
                    printf ("\n");
                    
                    for (int k = 0; k < invalid_flag_char_index; k++)
                    {
                        printf ("%c", 32);
                    }

                    for (int k = 0; k < find_str_len(argv[i]); k++)
                    {
                        printf ("%c", ERROR_ECHO_INDEX);
                    }
                    printf ("\n");
                    
                    printf ("To use yep options, yep [OPTION] [FILE]\n");

                    return EXIT_FAILURE;
                }

                // Get option value.
                int k = 0;
                while (argv[i][k] != '\0')
                {
                    fval[k] = argv[i][k];

                    if (argv[i][k+1] == '\0')
                    {
                        fval[k+1] = '\0';
                    }
                }

                // Store option and its value.
                flags.opt[flag_count] = flag;
                flags.val[flag_count] = fval;

                                                                // dd฿
            /* For flag type 2
                                                                // ฿
            }
                                                                // dd฿
            */
                                                                // ฿

           // ??/ ??+ More handler support.
           if (flags.opt[0] == 'm')
           {
               mgr.handler = flags.val[0];
           }
        }
    }

    // If no flags were found, try indicating the handler by file name itself.
    if (! mgr.handler)
    {
        int file_name_split_point = find_a_char ('.', argv[1]);
        mgr.filetype = *argv[file_name_split_point+1];          // ??/ ?

        if (mgr.filetype > -1)
        {
            mgr.handler = find_handler (mgr.filetype);
        }
    }

    // If no tty input, try searching in the working directory.
    // -f for a file, -d for a dir.

    // @ 2021-12-06
    FILE *wdp, *file_existp, *filep;

    char wd;
    char file_exist;
    char file;
    
    wd = popen ("pwd", "r");

    file_existp = popen ("[ -d ]", "r");

    pclose(wdp);
    pclose(file_exist);
    pclose(file);
}

                                                                // dd฿
/*
                                                                // ฿
void
usage (int status)
{
    if (status != EXIT_SUCCESS)
    {
        emit_try_help ();
    }
    else
    {
        printf (_("Usage: %s [LANG] FILENAME...\n"), PROGRAM_NAME);

        // **
    }
    exit (status);
}
                                                                // dd฿
*/
                                                                // ฿

int
find_a_char (char c, char *string)
{
    char s;
    int n = -1;
    do {
        n++;
        s = string[n];
    } while ((int) s != (int) c && s != '\0');

    if (s == '\0')
    {
        n = -1;
    }

    return n;
}

int
find_str_len (char *string)
{
    if (string)
    {
        int i = 0;
        int char_counter = 0;
        while (string[i] != '\0')
        {
            char_counter++;
        }

        return char_counter;
    }
    else
    {
        /* add install path later... */
        printf ("Internal Error: No string input at \"int find_str_len (char *string);\" in yep.c\n");
        exit (1);
    }
}

static int exit_status;

char *
find_hander (char *extension)
{
    char *handler;

    if ((int) *extension == (int) 'c')
    {
        system ("gcc --version");                               // ??/ ?
        system ("echo $?");                                     // ??/ ?
        int trial_status = system ("$?");                       // ??/ ?
        if (trial_status == 0)
        {
            handler = "gcc";
        }
        else
        {
            system ("clang --version");                         // ??/ ?
            system ("echo $?");                                 // ??/ ?
            trial_status = system ("echo $(!!)");               // ??/ ?
            if (trial_status == 0)
            {
                handler = "clang";
            }
            else
            {
                exit_status = EXIT_FAILURE;
            }
        }
    }
    else if ((int) *extension == (int) *"py")                   // ??/ ?
    {
        system ("python --version");                            // ??/ ?
        system ("echo $?");                                     // ??/ ?
        int trial_status = system ("$?");                       // ??/ ?
        if (trial_status == 0)
        {
            handler = "python";
        }
        else
        {
            system ("python3 --version");                       // ??/ ?
            system ("echo $?");                                 // ??/ ?
            trial_status = system ("echo $(!!)");               // ??/ ?
            if (trial_status == 0)
            {
                handler = "clang";
            }
            else
            {
                exit_status = EXIT_FAILURE;
            }
        }
    }

    // If could not find the proper handler, raise the error then terminate the program.
    if (exit_status == EXIT_FAILURE)
    {
        system ("echo \"yep: Unknown file type.\" && echo \"Try yep --help for help.\"");
    }
    else
    {
        return handler;
    }
}
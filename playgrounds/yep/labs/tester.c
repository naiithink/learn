#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef __linux__
#include <linux/limits.h>
#else
#include <limits.h>
    #ifdef WIN32
    #define PATH_MAX MAX_PATH
    #endif
#endif

#define PROGRAM_NAME "tester"
#define PROGRAM_SOURCE "tester.c"

#define YEP_REPORT_ENV_NAME "YEP_REPORT"
#define EXIT_FAILED_CODE "1"

static int exit_status;
typedef enum { dne = -1, false, true } running_ok;

running_ok set_env_from_user_input (char *env_name, char *input_prompt, int NL_cursor, int input_env_value_buff, int reprompt_loop);
int is_number (int n);
char *int_to_str (int n);
int is_path_exists (char *path_str);

int
main (int argc, char **argv)
{
    running_ok ok = dne;
    char *STDOUT_REPORT_PATH = getenv (YEP_REPORT_ENV_NAME);
    
    if (STDOUT_REPORT_PATH == NULL)
    {
        char SET_ENV_AGREEMENT;
        fputs ("Yep output report path env `YEP_REPORT` has not been set.\n", stdout);
        fputs ("Do you want to set it now? (y/n): ", stdin);
        if ((SET_ENV_AGREEMENT = fgetc (stdin)) == EOF)
        {
            ok = false;
            fputs ("Invalid Input\n", stdout);
            fputs ("\
Next time you run this program, please enter:\n\
`y`   if you want to set the path now.\n\
`n`   if you do not want to set the path (this program needs a path on this device where it can write the report file to).\n\
                   ", stdout);
            fputs ("Exiting with exit code: (", stdout);
            fputs (EXIT_FAILED_CODE, stdout);
            fputs (").\n", stdout);
        }
        else
            ok = true;

        /* Try setting STDOUT_REPORT_PATH */
        if (ok == true)
        {
            switch (SET_ENV_AGREEMENT)
            {
                case 32:
                case '\n':
                case 'n':
                case 'N':
                    fputs ("Set the output report path before you can use this program.\n", stdout);
                    ok = false;
                    break;
                case 'y':
                case 'Y':
                    if (set_env_from_user_input (YEP_REPORT_ENV_NAME, "Enter the report path: ", 0, PATH_MAX, 3) == true)
                        ok = true;
                    else
                        ok = false;
                    break;
                default:
                    ok = false;
            }
        }
    }

    /* Continue here. */

    if (ok < 0 || ok > 1)
    {
        fputs ("Exited with an unknown error.\n", stdout);
        return -1;
    }
    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

int
is_number (int n)
{
    int res = 0;
    int n_size = sizeof (n);
    
    switch (n_size)
    {
        case sizeof (int):
        case sizeof (long int):
        case sizeof (long long):
        case sizeof (long double):

            break;
        default:
            res = 0;
    }

    return res;
}

char *
int_to_str (int n)
{
    char *res;

    if (n)
    if (n >= 48 && n <= 57)
        res = n - 48;

    return res;
}

running_ok
set_env_from_user_input (char *env_name, char *input_prompt, int NL_cursor, \
                         int input_env_value_buff, int reprompt_loop)
{
    running_ok function_ok = -1;
    char env_value[input_env_value_buff];

    fputs (input_prompt, stdout);
    if (NL_cursor)
        fputs ("\n", stdout);
    
    if (fgets (env_value, sizeof(input_env_value_buff), stdin) == NULL)
    {
        fputs ("Invalid Input.\n", stdout);
        while (reprompt_loop)
        {
            set_env_from_user_input (env_name, input_prompt, NL_cursor, input_env_value_buff, reprompt_loop--);
        }
        function_ok = false;
    }
    else if (!is_path_exists (env_value))
    {
        while (reprompt_loop)
        {
            set_env_from_user_input (env_name, input_prompt, NL_cursor, input_env_value_buff, reprompt_loop--);
        }
        function_ok = false;
    }
    else if (setenv (env_name, env_value, 1) != 0)
    {
        function_ok = false;
        fputs ("Got an unknown error at ", stdout);
        fputs (PROGRAM_SOURCE, stdout);
        fputs (":", stdout);
        fputs (strtol (__LINE__), stdout);
        fputs ("\n", stdout);
        exit(1);
    }
    else
        function_ok = true;

    return function_ok;
}

int
is_path_exists (char *path_str)
{
    int res = 0;
    int have_permission = 0;

    if ((have_permission = access (path_str, F_OK)) == -1)
        res = 0;
    else if (have_permission == 0)
        res = 1;
    else
    {
        fputs ("Got an unknown error at ", stdout);
        fputs (PROGRAM_SOURCE, stdout);
        fputs (":", stdout);
        fputs (__LINE__, stdout);
        fputs ("\n", stdout);
        exit(1);
    }

    return res;
}
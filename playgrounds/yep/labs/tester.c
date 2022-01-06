#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "yep.h"

#ifdef __linux__
#include <linux/limits.h>
#else
#include <limits.h>
    #ifdef WIN32
    #define PATH_MAX MAX_PATH
    #endif
#endif

#define ASCII_OF_NOUGHT '0'

#define PROGRAM_NAME "tester"
#define PROGRAM_SOURCE "tester.c"
#define YEP_REPORT_ENV_NAME "YEP_REPORT"
#define EXIT_FAILED_CODE "1"

static int exit_status;
typedef enum { dne = -1, false, true } running_ok;

running_ok set_env_from_user_input (char *env_name, char *input_prompt, int NL_cursor, int input_env_value_buff, int reprompt_loop);
char *int_to_charptr (int n);
int is_path_exists (char *path_str);

int
main (int argc, char **argv)
{
    register running_ok ok = dne;
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

char *
int_to_charptr (int n)
{
    void *res;

    if (n && YEP_TYPE(n) >= 1 && YEP_TYPE(n) <= 11)
    {
        if (n >= 0 && n <= 9)
        {
            char *res = malloc (sizeof(YEP_TYPE_CHAR_PTR) * 2);
            if (res != NULL)
            {
                res[0] = n - ASCII_OF_NOUGHT;
                res[1] = '\0';
            }
            else
                free (res);
        }
        else
        {
            int n_copy0 = n, n_copy1 = n, digit_count = 0, sign_char = 0;
            
            while (n_copy0)
            {
                n_copy0 /= 10;
                digit_count++;
            }

            if (n < 0)
                sign_char = 1;

            int rem = 0;
            char reversed[digit_count];
            char *res = malloc ((sizeof(YEP_TYPE_CHAR_PTR) * digit_count) + (sizeof(YEP_TYPE_CHAR_PTR) * sign_char));

            if (res != NULL)
            {
                { /* LOCAL */
                    int i = digit_count;
                    res[digit_count-1] = '\0';
                    do
                    {
                        reversed[i] = (n_copy1 % 10) - ASCII_OF_NOUGHT;
                        n_copy1 /= 10;
                        i--;
                    }
                    while (i > 0);
                /* LOCAL */ }
            }
            else
                free (res);
        }
    }

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
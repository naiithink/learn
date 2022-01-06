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

#define YEP_REPORT_ENV_NAME "YEP_REPORT"
#define EXIT_FAILED_CODE "1"

static int exit_status;
typedef enum { dne = -1, false, true } running_ok;

running_ok set_env_from_user_input (char *env_name, char *input_prompt, int NL_cursor, int input_env_value_buff);

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
        if (!fgetc (SET_ENV_AGREEMENT))
        {
            ok = false;
            fputs ("Invalid Input\n", stdout);
            fputs ("\
Next time you run this program, please enter:\n\
`y`   if you want to set the path now.\n\
`n`   if you do not want to set the path (this program needs a path on this device where it can write the report file to).\n\
",
                  stdout);
            fputs ("Exiting with exit code: (", stdout);
            fputs (EXIT_FAILED_CODE, stdout);
            fputs (").\n", stdout);
        }
        else
            ok = true;

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
                    if (set_env_from_user_input (YEP_REPORT_ENV_NAME, "Enter the report path: ", 0, PATH_MAX) == true)
                    {
                        if ()
                            ok = true;
                    }
                    break;
                default:
                    ok = false;
            }
        }
    }

    if (ok < 0 || ok > 1)
    {
        fputs ("Exited with an unknown error.\n", stdout);
        return -1;
    }
    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

running_ok
set_env_from_user_input (char *env_name, char *input_prompt, int NL_cursor, int input_env_value_buff)
{
    running_ok function_ok = -1;
    char env_value[input_env_value_buff];

    fputs (input_prompt, stdout);
    if (NL_cursor)
        fputs ("\n", stdout);

    if (fgets (env_value, sizeof(input_env_value_buff), stdin) == NULL)
        function_ok = false;
    else if (setenv (env_name, env_value, 1) == 0)
        function_ok = true;

    return function_ok;
}
/*
*   Status: Not Done Yet
*/

#include <ctype.h>
#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include "yep.h"

#ifdef __linux__
#include <linux/limits.h>
#else
#include <limits.h>
    #if (defined WIN32)
    #define PATH_MAX MAX_PATH
    #elif (defined __APPLE__ && defined __MACH__)
    #define YEP_ISON_MACINTOSH 1
    #include <sys/sysctl.h>
    #endif
#endif

#define PROGRAM_NAME "yep"
#define PROGRAM_VERSION "eiei."
#define PROGRAM_VERSION_NOTE "\033[1;34mThis version of yep is currently under development.\033[0;39m"

#define YEP_REPORT_ENV_NAME "YEP_REPORT"
#define ASCII_OF_NOUGHT '0'
#define SPACE_CHAR 32

/* Var n Const */
static int exit_status;

typedef struct
{
    int type;
    char *name;
    char *parent_dir;
    char *owner;
    struct
    {
        int r;
        int w;
        int x;
    }
    permission;
    int inspected;
    FILE *p;
}
yep_file;

/* Clb? */
typedef enum
{
    reset = 39,
    red = 31,
    green,
    cyan,
    blue,
    magenta,
    skyblue,
    grey,
}
tty_clr;

typedef struct
{
    int type;
    char *title;
    char *description;
}
not_msg;

/* Fn */
running_ok set_env_from_user_input (char *env_name, char *input_prompt, int NL_cursor, int input_env_value_buff, int reprompt_loop);
running_ok format_w_color_seq (char *msg, tty_clr color);
void clear_tty (void);
void raise_not_msg (not_msg message, FILE *stream);
void raise_unknown_err (char *program_name, char *file, int line);
char *int_to_charptr (int n);
int does_path_exists (char *path_str);

#ifdef YEP_ISON_MACINTOSH
int
isa_translated_process (void)
{
   int ret = 0;
   size_t size = sizeof(ret);
   if (sysctlbyname ("sysctl.proc_translated", &ret, &size, NULL, 0) == -1) 
   {
      if (errno == ENOENT)
         return 0;
      return -1;
   }
   return ret;
}
#endif

int
main (int argc, char **argv)
{
    register running_ok ok = dne;

    #ifdef PROGRAM_VERSION_NOTE
    fprintf (stderr, "\n%s\n\n", PROGRAM_VERSION_NOTE);
    #endif

    #ifdef YEP_ISON_MACINTOSH
    if (isa_translated_process ())
        fprintf (stderr, "\033[1m%s: \033[1;35mWarning:\033[0m This program is currently running as a translated process.\n", PROGRAM_NAME);
    #endif

    char *STDOUT_REPORT_PATH = getenv (YEP_REPORT_ENV_NAME);
    
    if (STDOUT_REPORT_PATH == NULL)
    {
        char SET_ENV_AGREEMENT;
        int SET_ENV_AGREEMENT_OVERFLOWN = 0;
        fprintf (stderr, "\033[1m%s: \
\033[1;31m\
Error: \
\033[1;39m\
Destination path for the report file has not been set.\n\
\033[0m\
%s needs an existing path on this device where it can write the report file there.\n", PROGRAM_NAME, PROGRAM_NAME);
        fputs ("Do you want to set it now? [y/N]: ", stdout);
        if ((SET_ENV_AGREEMENT = fgetc (stdin)) == EOF)
        {
            SET_ENV_AGREEMENT_OVERFLOWN = 1;
            ok = false;
            fprintf (stderr, "\033[1m%s: \
\033[1;31m\
Error: \
\033[1;39m\
Invalid input.\n\
\033[0m\
\n\
\033[1mExiting with exit code (%d).\033[0m\n", PROGRAM_NAME, EXIT_FAILURE);
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
                    fprintf (stderr, "\033[1m%s: \
\033[1;34m\
Note: \
\033[0;39m\
Set a destination path for the report file before you can use this program.\n", PROGRAM_NAME);
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
                    { /* LOCAL */
                        char desig_over = '\0';
                        if (SET_ENV_AGREEMENT_OVERFLOWN)
                            desig_over = '*';
                        fprintf (stderr, "\033[1m%s: \
\033[1;31m\
Error: \
\033[1;39m\
Unknown option: \
\033[0m\
'%c%c'\n\
\033[0m\
\n\
\033[1mExiting with exit code (%d).\033[0m\n", PROGRAM_NAME, SET_ENV_AGREEMENT, desig_over, EXIT_FAILURE);
                    /* LOCAL */ }
                    ok = false;
            }
        }
    }

    /* Continue here. */

    if (ok < 0 || ok > 1)
    {
        raise_unknown_err (PROGRAM_NAME, __FILE__, __LINE__);
        return -1;
    }
    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

int
str_len (char *str)
{
    int res = 0;

    if (!str || str == NULL)
        return res = -1;
    
    int i = 0;
    do
    {
        res++;
        i++;
    }
    while (str[i] != '\0');

    return res;
}

/* 2022-01-09 */
running_ok
format_w_color_seq (char *msg, tty_clr color)
{
    running_ok status = dne;
    char *swap;
    int str_buf = str_len (msg);
    int buf = (sizeof(char) * 6) + ((sizeof(char) * str_buf) + 1);
    
    swap = calloc (1, buf);
    for (int i = 0; i < buf; i++)
    {
        if (i == buf)
        {
            /* ??? */
            break;
        }
    }

    return status;
}

void
clear_tty (void)
{
    fputs ("\033c", stdout);
}

void
raise_not_msg (not_msg message, FILE *stream)
{
    char *title_format;
    switch (message.type)
    {
        case 1:
            break;
        default:
            /* ??? */
            break;
    }
    fprintf (stream, "%s%s: \
\033", "", PROGRAM_NAME);
}

void
raise_unknown_err (char *program_name, char *file, int line)
{
    fprintf (stderr, "\033[1m%s:\033[0m \n\
%s:%d: \
\033[1;31m\
InternalError: \
\033[1;39m\
An unknown error occurs.\033[0m\n", program_name, file, line);
    if (PROGRAM_VERSION_NOTE)
        fprintf (stderr, "--\n%s\n", PROGRAM_VERSION_NOTE);
}

char *
int_to_charptr (int n)
{
    /* pointer */ void *res;

    if (n && YEP_TYPE(n) >= 1 && YEP_TYPE(n) <= 11)
    {
        if (n >= 0 && n <= 9)
        {
            char *res = calloc (1, sizeof(YEP_TYPE_CHAR_PTR) * 2);
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
            char *res = calloc (1, (sizeof(YEP_TYPE_CHAR_PTR) * digit_count) + (sizeof(YEP_TYPE_CHAR_PTR) * sign_char));

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
        fprintf (stderr, "\033[1m%s: \
Invalid input.\
\033[0m\n", PROGRAM_NAME);
        if (reprompt_loop)
            set_env_from_user_input (env_name, input_prompt, NL_cursor, input_env_value_buff, reprompt_loop--);
        function_ok = false;
    }
    else if (!does_path_exists (env_value))
    {
        if (reprompt_loop)
            set_env_from_user_input (env_name, input_prompt, NL_cursor, input_env_value_buff, reprompt_loop--);
        function_ok = false;
    }
    else if (setenv (env_name, env_value, 1) != 0)
    {
        function_ok = false;
        raise_unknown_err (PROGRAM_NAME, __FILE__, __LINE__);
        exit (-1);
    }
    else
        function_ok = true;

    return function_ok;
}

int
does_path_exists (char *path_str)
{
    int res = 0;
    int have_permission = 0;

    if ((have_permission = access (path_str, F_OK)) == -1)
        res = 0;
    else if (have_permission == 0)
        res = 1;
    else
    {
        raise_unknown_err (PROGRAM_NAME, __FILE__, __LINE__);
        exit (-1);
    }

    return res;
}
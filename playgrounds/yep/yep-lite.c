#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "yep.h"

#if (defined YEP_IS_IN && defined YEP_IS_ON)
#define SUPPORTED_PLATFORM 1
#else
#define SUPPORTED_PLATFORM 0
#endif

enum os_enum {linux, darwin, win32};
enum unix_shell {bash, zsh};
enum dos_shell {cmd, powershell, bash, zsh};

int de_enum (char *enum_var, int id);
char *find_handler (char *file_name);

int strlen (char *str);

typedef struct
{
    char *pwd;
    char *cd;
}
shell_command;

int
main (int argc, char **argv)
{
    if (argv[1])
    {
        if (argv[1][0] == '/')
        {
            FILE *target_file, *ep;
            char *cmd0, *cmd1;

            *cmd0 = malloc (4 * sizeof(char) + sizeof(argv[1][0]) + 4 * sizeof(char) + (sizeof(argv[1][0]) - 2) + sizeof(char));
            
            int n = strlen (argv[1][0]);
            char *cmd_fragment = {"gcc", argv[1][0], "-o", argv[1][0]};
            for (int i = 0, fragments = 4; i < fragments; i++)
            {
                int j = 0;
                for (n = strlen(cmd_fragment[i]); j < n; j++)
                {
                    if (i == 4 && j == n-1)
                    {
                        cmd0[j] = '\0';
                        break;
                    }
                    cmd0[j] = cmd_fragment[j];
                }
                if (i != 4)
                {
                    cmd0[j+1] = 32;
                }
            }

            printf("%s\n", cmd0);
            free (cmd0);

            /*
            target_file = fopen (argv[1], "r");
            ep = popen ("gcc", "r");

            fclose (target_file);
            */
        }
    }
    else
    {
        fputs ("\
yep: Find not found.\n\
    May be giving a full path to the file to yep instead.\n\
", stdout);
    }
}

int
de_enum (char *enum_var, int id)
{
    char *p, *forming_up;
    int result;
    *forming_up = malloc (\
                        (5 * sizeof(void*))         /* "enum" */       + \
                        (1 * sizeof(char))          /* white space */   + \
                        (1 * sizeof(enum_var))      /* enum var */      + \
                        (1 * sizeof(char))          /* white space */   + \
                        (3 * sizeof(char))          /* '=' */           + \
                        (1 * sizeof(char))          /* white space */   + \
                        (1 * sizeof(int))           /* int id */        + \
                        (2 * sizeof(char))          /* ";`\0`" */         \
                        );
    // for ()
    forming_up = 
    result = forming_up;
}

char *
find_handler (char *file_name)
{
    FILE *wd, *cd_to_wd;
    shell_command command;
    char *cmd, *cmd_str;
    int yep_is_in;
    enum os_enum yep_is_in = YEP_IS_IN;

    /*
    switch (yep_is_in)
    {
        case 0:
        case 1:
            enum unix_shell shell = ;
            break;
        case 2:
            enum dos_shell shell = ;
            break;
    }
    */

    wd = popen ("pwd", "r");

    pclose (wd);

    cmd_str = malloc (strlen(cmd) * sizeof(char));

    cd_to_wd = popen ("cd", "r");
}

int
strlen (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
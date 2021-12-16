#include <stdio.h>
#include <stdlib.h>

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
            
            

            char *cmd_fragment = {"gcc", argv[1][0], "-o", argv[1][0]};
            for (int i = 0, fragments = 4; i < fragments; i++)
            {
                int j = 0;
                for (int n = strlen(cmd_fragment[i]); j < n; j++)
                {
                    if (i == 4 && j == n-1)
                    {
                        cmd0[j] = '\0';
                        break;
                    }
                    cmd0[j] = cmd_fragment[j];
                    printf("%i\n", j);
                }
                if (i != 4)
                {
                    cmd0[j+1] = 32;
                }
            }

            printf(">> %s\n", cmd0);
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
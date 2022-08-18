#include <getopt.h>
#include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>

#define PS1 ">>> "
#define MAX_INPUT PATH_MAX

void usage(void);

static char input[MAX_INPUT];

int main(int argc, char **argv)
{
    int ch = 0;
    int opt_index = 0;

    static struct option longopts[] =
    {
        { "ps1",    required_argument,  NULL,   'a' },
        { 0, 0, 0, 0 }
    };

    while ((ch = getopt_long(argc, argv, "a:",
                             longopts, &opt_index)))
        switch (ch)
        {
            case 'a':
                if (optarg == NULL
                    || *optarg == '\n')
                    strncpy(input, PS1, strlen(PS1));
                else
                    strncpy(input, );

                break;

            default:
                usage();
        }



    while (1)
    {
        printf("%s", PS1);
        fgets();
    }

    return 0;
}

void usage(void)
{
    fprintf(stderr, "Help Page\n");
}

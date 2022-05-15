#include <getopt.h>
#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define PROGRAM_NAME "renaming"

static int flag;
static char path[PATH_MAX];

void print_helptext(void);

int main(int argc, char **argv)
{
    opterr = 0;
    int ch = 0;
    int opt_index = 0;

    static struct option longopts[] =
    {
        { "file",   required_argument,  NULL,   'f' },
        { "help",   no_argument,        NULL,   'h' },
        { 0, 0, 0, 0 }
    };

    while (1)
    {
        ch = getopt_long(argc, argv, "f:h",
                         longopts, &opt_index);

        switch (ch)
        {
            case 0:
                if (longopts[opt_index].flag != 0)
                    fprintf(stderr, "flag `%s' has been set to `%d'\n", longopts[opt_index].name, longopts[opt_index].val);
                else
                    fprintf(stderr, "error: %d\n", __LINE__);
                break;
            case '?':
                /* already printed error message */
                printf("gotcha!\n");
                break;
            case 'f':
                if (optarg == NULL)
                {
                    fprintf(stderr, "option `%c' requires 1 argument.\n", ch);
                    exit(1);
                }
                printf("file path: %s\n", optarg);
                if (strlen(optarg) < PATH_MAX)
                {
                    strcpy(path, optarg);
                    printf("path: %s\n", path);
                }
                else
                    fprintf(stderr, "path too long.\n");
                break;
            case 'h':
                print_helptext();
                exit(0);
                break;
            default:
                // fprintf(stderr, "error: %d\n", __LINE__);
                abort();
        }
    }

    return 0;
}

void print_helptext(void)
{
    fprintf(stderr, "%s: usage:\n\
Options:\n\
\t-h, --help\t\tprint this help text\n\
\t-f, --flag\t\tset a flag to 1\n", PROGRAM_NAME);
}
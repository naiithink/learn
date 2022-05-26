#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

static int up;

int main(int argc, char **argv)
{
    int c;

    static struct option long_options[] =
    {
        { "one", no_argument, &up, 100 },
        { "eiei", no_argument, NULL, 'e' },
        { 0, 0, 0, 0 }
    };

    while (1)
    {
        int option_index = 0;

        c = getopt_long(argc, argv, "e", long_options, &option_index);

        if (c == -1)
            break;

        switch (c)
        {
            case 0:
                // printf("index: %d\n", option_index);
                if (long_options[option_index].flag != 0)
                    break;
                printf("option %s", long_options[option_index].name);
                if (optarg)
                    printf(" with arg %s", optarg);
                printf("\n");
                break;
            case 'e':
                printf("eiei\n");
                break;
            case '?':
                break;
            default:
                printf("optopt: %s\n", optopt);
        }

        printf("optind: %d\n", optind);
    }

    // for (int i = 0; i < option_index)

    printf(">> %d\n", up);

    return 0;
}
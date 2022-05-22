#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int ch = 0;
    int a = 0;
    int b = 0;
    char *cvalue = NULL;

    while ((ch = getopt(argc, argv, "ab:c:")) != -1)
    {
        switch (ch)
        {
            case 'a':
                printf("%d\n", optind);
                printf("%c\n", 'a');
                break;
            case 'b':
                printf("%d\n", optind);
                printf("%s\n", optarg);
                break;
            case 'c':
                printf("%d\n", optind);
                printf("%s\n", optarg);
                break;
            case '?':
                if (optopt == 'c' || optopt == 'b')
                    fprintf(stderr, "Option -%c requires an argument.\n", optopt);
                else if (isprint(optopt))
                    fprintf(stderr, "Unknown option `-%c'.\n", optopt);
                else
                    fprintf(stderr, "Unknown option character `\\x%x'.\n", optopt);
                return 1;
            default:
                printf("Error\n");
        }
    }

    for (int index = optind; index < argc; ++index)
    {
        printf("Non-option argument %s\n", argv[index]);
    }

    return 0;
}
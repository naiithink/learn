#include <getopt.h>
#include <stdio.h>

#define DEFAULT_LANG "English"

typedef enum { dne = -1, en, th, C } langs;

static int lang = dne;

int main(int argc, char **argv)
{
    int ch;
    int option_index = 0;

    static struct option long_options[] =
    {
        { "en", no_argument, NULL, 'e' },
        { "th", no_argument, NULL, 't' },
        { NULL, 0, NULL, 0 }
    };

    int loop = 0;

    while (1)
    {
        ch = getopt_long(argc, argv, "etC", long_options, &option_index);

        if (ch == -1)
            break;
        
        printf("loop: %d\n", ++loop);
        printf("ch: %c\n", ch);

        switch (ch)
        {
            case 0:
                fprintf(stderr, "1\n");
                break;
            case 'e':
                fprintf(stderr, "2\n");
                lang = en;
                break;
            case 't':
                fprintf(stderr, "3\n");
                lang = th;
                break;
            case 'C':
                fprintf(stderr, "4\n");
                lang = C;
                break;
            case '?':
                fprintf(stderr, "5\n");
                /* already raised by `getopt_long' */
                break;
            default:
                fprintf(stderr, "No specified language, using default %s.\n", DEFAULT_LANG);
                lang = en;
        }
    }

    printf("%d\n", lang);

    switch (lang)
    {
        case en:
            printf("%s\n", "English");
            break;
        case th:
            printf("%s\n", "ไทย");
            break;
        case C:
            printf("I am C.\n");
            break;
    }

    return 0;
}
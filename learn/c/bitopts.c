#include <stdint.h>
#include <stdio.h>

#define OPT_X 1
#define OPT_W 2
#define OPT_R 4

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        fprintf(stderr, "Error: no input number.\n");
        return 1;
    }

    if (argv[1][1] != '\0')
    {
        fprintf(stderr, "Error: Invalid input: only support single digit number.\n");
        return 1;
    }

    int opt = argv[1][0] - 48;

    if (opt & OPT_X)
        printf("Executable\n");
    else if (opt & OPT_W)
        printf("Writtable\n");
    else if (opt & OPT_R)
        printf("Readable\n");
    else
        printf("Other\n");

    return 0;
}
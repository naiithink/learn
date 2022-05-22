#include <stdio.h>

#define STR 255

int main(int argc, char **argv)
{
    char s[STR];
    printf("argv:  %s\n", argv[1]);
    printf("stdin: %s\n", fgets(s, STR, stdin));

    return 0;
}
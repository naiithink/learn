#include <stdio.h>

int main(void)
{
    FILE *thefile;
    char buffer[10];

    thefile = fopen("playgrounds/DirSync/read.c", "r");

    while (1)
    {
        fread(buffer, sizeof(char), 1, thefile);
        if (buffer[0] == EOF)
            break;
        printf("%s", buffer);
    }

    fclose(thefile);

    return 0;
}
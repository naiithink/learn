#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 6

int main(int argc, char **argv)
{
    char *s1 = "hello";
    char s2[6] = "world";
    char *target;
    char (*chunk)[BUFFER_SIZE] = (char (*)[BUFFER_SIZE])calloc(1, sizeof(char) * BUFFER_SIZE);

    for (int i = 0; i < BUFFER_SIZE; ++i)
    {
        *chunk[i] = s2[i];
    }

    // chunk -= BUFFER_SIZE;

    for (int i = 0; *chunk[i] != '\0'; ++i)
        printf("%c\n", **chunk++);

    free(chunk);
    return 0;
}
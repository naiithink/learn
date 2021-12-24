#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int p[2], pid;
    char *hello, inbuff[14];
    
    hello = argv[1];

    if (pipe(p) < 0)
    {
        exit(1);
    }

    if ((pid = fork()) > 0)
    {
        write(p[1], hello, 14);
        // wait(NULL);
    }

    read(p[0], inbuff, 14);
    printf(">> %s\n", inbuff);

    close(p[0]);
    close(p[1]);

    return 0;
}
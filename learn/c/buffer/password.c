#include <stdio.h>
#include <string.h>
#include <errno.h>


#define BUFFER_SIZE 10

int main(int argc, char **argv)
{
    char password[BUFFER_SIZE] = "passw0rd";
    char buffer[BUFFER_SIZE] = "BUFFER";

    strcpy(buffer, argv[2]);
    
    if (!strcmp(argv[1], password))
    {
        printf("password checks out.\n");
        printf("%s\n", buffer);
    }
    else
    {
        printf("wrong password.\n");
        return 1;
    }

    return 0;
}
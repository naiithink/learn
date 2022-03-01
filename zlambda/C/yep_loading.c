#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{
    char cmd[255];

    printf("\n\n\n\n");

    printf("\033[3F");
    printf("\033[1myep 1.0\033[0m\n\n\n");
    sleep(1);

    printf("\033[2F");
    printf("loading\n\n");
    
    for (int n = 0; n < 5; n++)
    {
        usleep(500000);
        printf("\033[2F");
        printf("\033[8C");
        printf(".\n\n");
    
        usleep(500000);
        printf("\033[2F");
        printf("\033[9C");
        printf(".\n\n");

        usleep(500000);
        printf("\033[2F");
        printf("\033[10C");
        printf(".\n\n");
        
        usleep(500000);
        printf("\033[2F");
        printf("\033[8C");
        printf("   \n\n");
    }
    usleep(500000);
    printf("\033[2F");
    printf("yep is now ready.\n\n");

    printf("💩 ");
    fgets(cmd, 255, stdin);

    return 0;
}
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("\
\n\
\n\
\n");

    printf("\033[3F");
    sleep(1);

    printf("\033[11mHello\033[0m\n\n\n");
    printf("\033[12mHello\033[0m\n\n\n");
    printf("\033[13mHello\033[0m\n\n\n");
    printf("\033[14mHello\033[0m\n\n\n");
    printf("\033[15mHello\033[0m\n\n\n");
    printf("\033[16mHello\033[0m\n\n\n");
    printf("\033[17mHello\033[0m\n\n\n");
    printf("\033[18mHello\033[0m\n\n\n");
    printf("\033[19mHello\033[0m\n\n\n");
    sleep(1);

    printf("\033[2F");
    printf("world\n\n");
    sleep(1);

    printf("\033[1F");
    printf("\033[31m");
    printf("eiei.\n");
    sleep(1);

    printf("\033[2F");
    printf("\033[31m");
    printf("eiei.\n");
    printf("\033[1E");
    // sleep(1);

    printf("\033[1F");
    printf("\033[32m");
    printf("ahii.\n");
    sleep(1);

    printf("\033[1F");
    printf("\033[31m");
    printf("eiei.\n");
    sleep(1);

    printf("\033[1F");
    printf("\033[32m");
    printf("ahii.\n");

    return 0;
}

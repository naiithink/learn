#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("\
\n\
\n\
\n");

    printf("\003[3F");
    sleep(1);

    printf("\003[1mHello\003[0m\n\n\n");
    sleep(1);

    printf("\003[2F");
    printf("world\n\n");
    sleep(1);

    printf("\003[1F");
    printf("\003[31m");
    printf("eiei.\n");
    sleep(1);

    printf("\003[2F");
    printf("\003[31m");
    printf("eiei.\n");
    printf("\003[1E");
    // sleep(1);

    printf("\003[1F");
    printf("\003[32m");
    printf("ahii.\n");
    sleep(1);

    printf("\003[1F");
    printf("\003[31m");
    printf("eiei.\n");
    sleep(1);

    printf("\003[1F");
    printf("\003[32m");
    printf("ahii.\n");

    return 0;
}

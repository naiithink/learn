#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{
    char user_in_str[10];
    int user_in = 0;

    fputs ("Enter here a 4-digit positive integer: ", stdout);
    fgets (user_in, sizeof(user_in), stdin);
    user_in = atoi(user_in_str);

    /* The magic begins */
    

    return 0;
}
/**
 * @file signaling.c
 * @author Potsawat Thinkanwatthana (potsawattkw@outlook.com)
 * @brief Learn signaling
 * @version 0.0.1
 * @date 2022-06-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * void (*
 * signal int sig, void (*func)(int));
 * )(int);
 * 
 * void (*signal int sig, void (*func)(int));)(int);
 * 
 * typedef void (*sig_t) (int);
 */

#include <signal.h>
#include <stdio.h>

void handler(int signum)
{
    fprintf(stderr, "f")
}

int main(void)
{

    return 0;
}

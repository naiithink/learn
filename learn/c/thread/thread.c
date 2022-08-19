/**
 * PTHREAD_CREATE(3)
 * --
 * 
 * SYNOPSIS
 * #include <pthread.h>
 * int
 * pthread_create(pthread_t *thread,
 *                const pthread_attr_t *attr,
 *                void *(*start_routine)(void *),
 *                void *arg);
 * 
 * --
 */

#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *myturn(void *);
void *yourturn(void *);

int main(void)
{
    int creation_status;
    pthread_t newthread_id;

    /*
     * int
     * pthread_create(...);
     * 
     * If successful, the pthread_create() function will return zero.
     * Otherwise an error number will be returned to indicate the error.
     */
    creation_status = pthread_create(&newthread_id,
                                     NULL,
                                     myturn,
                                     NULL);

    // myturn();
    yourturn(NULL);

    return 0;
}

void *myturn(void *arg)
{
    while (1)
    {
        sleep(1);
        printf("My Turn!\n");
    }

    // exit_status
    return NULL;
}

void *yourturn(void *arg)
{
    while (1)
    {
        sleep(2);
        printf("Your Turn!\n");
    }

    // exit_status
    return NULL;
}

/**
 * yourturn() exits before myturn()
 *
 * main() finishes (exit) before the thread completes.
 * 
 * --
 * 1 -> My Turn!
 *      Your Turn!
 * 2 -> My Turn!
 * 3 -> My Turn!
 *      Your Turn!
 * 4 -> My Turn!
 * 5 -> My Turn!
 *      Your Turn!
 * --
 * 
 * expected: 8
 * actual: 5
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
    for (int i = 0; i < 8; ++i)
    {
        sleep(1);
        printf("My Turn!\n");
    }

    // exit_status
    return NULL;
}

void *yourturn(void *arg)
{
    for (int i = 0; i < 3; ++i)
    {
        sleep(2);
        printf("Your Turn!\n");
    }

    // exit_status
    return NULL;
}

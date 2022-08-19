#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *myturn(void *);
void *yourturn(void *);

int main(void)
{
    // monitoring
    int creation_status;
    int join_status;

    pthread_t newthread_id;

    // true vars
    int v = 5;

    creation_status = pthread_create(&newthread_id,
                                     NULL,
                                     myturn,
                                     &v);

    yourturn(NULL);

    join_status = pthread_join(newthread_id, NULL);

    printf("thread's done: v = %d\n", v);

    return 0;
}

void *myturn(void *arg)
{
    int *p = (int *) arg;

    for (int i = 0; i < 8; ++i)
    {
        sleep(1);
        printf("My Turn! %d, %d\n", i, *p);
        (*p)++;
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

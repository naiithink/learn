#include <pthread.h>
#include <stdio.h>

struct thread_data
{
    int val;
};

void *say_hello_then_increase(void *);

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
int n = 0;

int main(void)
{
    // monitoring
    pthread_t newthread_id1;
    pthread_t newthread_id2;
    int creation_status;

    // data
    struct thread_data main_data;

    main_data.val = 5;

    creation_status = pthread_create(&newthread_id1,
                                     NULL,
                                     say_hello_then_increase,
                                     &main_data);

    creation_status = pthread_create(&newthread_id2,
                                     NULL,
                                     say_hello_then_increase,
                                     &main_data);

    pthread_join(newthread_id1, NULL);
    pthread_join(newthread_id2, NULL);

    printf("%d\n", main_data.val);

    return 0;
}

void *say_hello_then_increase(void *arg)
{
    pthread_mutex_lock(&mutex1);

    struct thread_data *data = (struct thread_data *) arg;

    printf("Thread: %lu: hello, world. %d\n", pthread_self(), data->val);

    data->val++;

    pthread_mutex_unlock(&mutex1);
    return 0;
}

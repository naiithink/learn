#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MSG_SIZE 7

int test_func(int i)
{
    int res = i + 1000;
    return res;
}

int main(void)
{
    char msg[3][MSG_SIZE] = {"hello", "hello1", "hello2"}, reads[MSG_SIZE];
    int mypipe[2];

    if ((pipe(mypipe)))
        return 1;
    
    for (int i = 0; i < 3; i++)
    {
        write (mypipe[1], msg[i], MSG_SIZE);
    }

    for (int i = 0; i < 3; i++)
    {
        read (mypipe[0], reads, MSG_SIZE);
        fputs (reads, stdout);
    }

    return 0;
}
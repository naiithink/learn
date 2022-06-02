#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    pid_t pid0 = 0;
    
    pid0 = fork();

    if (pid0)
        printf("child: %i\n", pid0);
    else
    {
        
    }

    return 0;
}

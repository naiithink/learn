#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#ifdef __APPLE__
    #include <sys/wait.h>
#else
    #include <wait.h>
#endif

extern char **environ;

int main(void)
{
    // const char *const path = "/workspaces/private/learn/c/process/programs/hello";
    const char *const path = "ls";
    char *const argvs[] = {"/bin/ls", "hello", "world", NULL};

    // fcntl();

    int ret = -1;
    pid_t pid = -1;

    while (1)
    {
        pid = fork();

        if (pid == 0)
        {
            // child
            printf("am the child %d\n", getpid());
            return 0;
        }
        else
        {
            // parent
            wait(NULL);
            printf("am the parent of %d\n", pid);
            // waitpid(pid, );
            // ret = execve(path, argvs, environ);
            // execlp("ls", "ls", "-1", NULL);
            // exit(1);
            sleep(5);
        }
    }

    return 0;
}

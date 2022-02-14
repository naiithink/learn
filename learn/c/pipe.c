/*
*   POSIX Safety Concepts: https://www.gnu.org/software/libc/manual/html_node/POSIX-Safety-Concepts.html
*/

#include <dirent.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// #include <sys/dir.h>
// #include <sys/types.h>
#include <unistd.h>

void // char **
get_env_val_array (char *env_name)
{
    int sep_count = 0, env_val_count = 0;
    char *env_str = getenv(env_name);

    {
        int i = 0;
        while (env_str[i] != '\0')
        {
            if (env_str[i] == ':')
                sep_count++;
            i++;
        }
    }
    env_val_count = sep_count + 1;

    printf("%i\n", env_val_count);

    // return res;

    // printf("%s\n", env_str);
    /*
    int sep_count = 0, env_val_count = 0;
    char *env_val, **result;

    env_val = getenv(env_name);
    {
        int i = 0;
        while (env_val[i] != NULL)
        {
            if (env_val[i] == ':')
                sep_count++;
            i++;
        }
    }
    env_val_count = sep_count + 1;

    int indx = 0;
    char res[env_val_count][PATH_MAX];
    
    for (int i = 0; i < env_val_count; i++)
    {
        {
            int j = 0;
            while (env_val[indx] != ':')
            {
                res[i][j] = env_val[indx];
                indx++;
            }
        }
    }
    */

    // return env_str;
}

int main(int argc, char **argv)
{
    // if ( 
    get_env_val_array("PATH"); // != NULL )
    {
        // char **ss = get_env_val_array("PATH");
        // for (int i = 0; i < 6; i++)
        {
        //     printf("%s\n", ss[i]);
        }
    }
    /*
    char **test = get_env_val_array ("PATH");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", test[i]);
    }
    */
    /*
    DIR *d;
    struct dirent *ep;

    d = opendir ("/mnt/Git/private/learn/math/calculus");
    if (d != NULL)
    {
        while ((ep = readdir (d)) != NULL)
        {
            printf ("%s\n", ep->d_name);
        }
    }
    else
        perror ("Couldn't open the directory");

    closedir (d);
    */
    
    /*
    int p[2], pid;
    char *hello, inbuff[14];
    
    hello = argv[1];

    if (pipe(p) < 0)
    {
        exit(1);
    }

    if ((pid = fork()) > 0)
    {
        write(p[1], hello, 14);
        // wait(NULL);
    }

    read(p[0], inbuff, 14);
    printf(">> %s\n", inbuff);

    close(p[0]);
    close(p[1]);
    */

    return 0;
}
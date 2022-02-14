#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// #include <stdarg.h>
#include <sys/dir.h>
#include <sys/param.h>
#include <sys/types.h>
// #include <time.h>
#include <unistd.h>

// #include "yep.h"

static int exit_status, *error_lines, error_count;
// void write_error ();

// Can be used recursively
char *cat_str (char *frag0, char *frag1);
char **get_env_contents (char *env_name);

int
main (int argc, char **argv)
{
    int arg_opt, *p, pid;
    char *report_dir, **p_in, **p_out;
    
    if ( 1 ) // getenv ("YEP_PATH") != NULL )
    {
        char w[PATH_MAX];
        // report_dir = getenv ("YEP_PATH");
        //printf ("%s\n", report_dir);
        getcwd(w, sizeof(w));
        printf ("%s\n", w); // PATH_MAX));
        // free(w);
        // printf ("%s\n", w); // PATH_MAX));
        return 0;
    }
    /*
    else
    {
        char user_in_report_dir[PATH_MAX];

        fputs ("\
yep wheel\n\
--\n\
Report directory path has not been set.\n\
Please specify the path down below.\n\
>>> \
", stdout);
        fgets (user_in_report_dir, PATH_MAX, stdin);

        FILE *in_report_dir_check = fopen(user_in_report_dir, "r");

        if ( in_report_dir_check == NULL )
        {
            printf ("The given path does not exist.\n");
            if (tries-1 == 0)
                printf ("No tries left, sorry.\n");
            else if (tries-1 == 1)
                printf ("Please try again (%i try left).\n", tries-1);
            else
                printf ("Please try again (%i tries left).\n", tries-1);
        }
        else
        {
            // Check dir contents
            DIR *dp;
            struct dirent *ep;

            dp = opendir ("./");
            if (dp != NULL)
            {
                while (ep = readdir (dp))
                {
                    puts (ep->d_name);
                    (void) closedir (dp);
                }
            }
            else
            perror ("Couldn't open the directory");

            FILE *dir_contents;

            // foo
            dir_contents = popen ("ls -a /Users/naiithink/volumes/mountable/Git/private/playgrounds/yep/sub-yep/yep-template/yep-dev-bundle", "r");
            
            if ( setenv("YEP_PATH", user_in_report_dir, 0) == 0 )
            {
                fclose (in_report_dir_check);
                break;
            }
            else if ( tries == 1 )
            {
                fclose (in_report_dir_check);
            }
        }
    }
    */

    return 0;

    /*
    while (arg_opt = getopt (argc, argv, "") > -1)
    {

    }

    if ( pipe(p) < 0 )
    {
        
    }
    */
}

char **
get_env_contents (char *env_name)
{
    int ok;
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

    return result = ok ? res : NULL;
}

/*
char *
cat_str (char *frag0, char *frag1)
{
    unsigned int str_len_in_byte;
    int *p_res;

    str_len_in_byte = sizeof(frag0) + sizeof(frag1);

    if ( (p_res = malloc (str_len_in_byte)) == NULL )
    {
        error_lines[error_count] = __LINE__;
        error_count++;
        exit_status = 1;
    }
}
*/
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// #include "yep.h"

static int exit_status, *error_lines, error_count;
// void write_error ();

// Can be used recursively
char *cat_str (char *frag0, char *frag1);

int
main (int argc, char **argv)
{
    int arg_opt, *p, pid;
    char *report_dir, **p_in, **p_out;
    
    if ( getenv ("YEP_PATH") )
    {
        report_dir = getenv ("YEP_PATH");
        printf ("%s\n", report_dir);
        return 0;
    }
    else
    {
        for (int tries = 4; tries > 0; tries--)
        {
            char in_report_dir[PATH_MAX];

            fputs ("\
yep wheel\n\
    Report directory path has not been set.\n\
    Please specify the path down below.\n\
    Enter the report dir path: \
", stdout);
            fgets (in_report_dir, PATH_MAX, stdin);

            FILE *in_report_dir_check = fopen(in_report_dir, "r");

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
                /* Experimental
                // Check dir contents
                FILE *dir_contents;

                // foo
                dir_contents = popen ("ls -a /Users/naiithink/volumes/mountable/Git/private/playgrounds/yep/sub-yep/yep-template/yep-dev-bundle", "r");
                */
               if ( setenv("YEP_PATH", in_report_dir, 0) == 0 )
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
    }

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
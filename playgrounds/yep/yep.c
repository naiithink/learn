/*
*   Updated: 2022-01-04
*   GNU Coding Standard: https://www.gnu.org/prep/standards/html_node/Writing-C.html
*   Reminders:
*       - ALWAYS `memcheck'.
*   2DO:
*       [ ] APPLY getopt_long()
*       [ ] MAKE yep_write_log()
*       [ ] MAKE yep_json()
*   Plan-ahead:
*       [ ] UPGRADE : multiple yapp.
*       ...*
*/

// #include <getopt.h>
// #include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
// #include <stdarg.h>
// #include <sys/dir.h>
// #include <sys/errno.h>
// #include <sys/param.h>
#include <sys/types.h>
// #include <time.h>
#include <unistd.h>

#include "yep.h"

#define PROGRAM_NAME "yep"
#define PROGRAM_SOURCE "yep.c"

/* argv[1] = path/to/yapp, argv[2] = str to write to yapp stdin */
int
main (int argc, char **argv)
{
    pid_t yep_pid = getpid ();

    /* LAB: get path from env */
    char *LAB_CACHE_DIR = getenv ("YEP_LAB_CACHE_DIR");
    printf (">>> %s\n", LAB_CACHE_DIR);
    char *LAB_CACHE_FILE = getenv ("YEP_LAB_CACHE_FILE");
    printf (">>> %s\n", LAB_CACHE_FILE);
    char *GCC_PATH = "/bin/bash";
    printf (">>> %s\n", GCC_PATH);
    char *GCC_OUTPUT_FLAG = "-o";
    printf (">>> %s\n", GCC_OUTPUT_FLAG);

    /*
    char user_in_str[10];
    int user_in = 0;

    fputs ("Enter 4-digit integer: ", stdout);
    fgets (user_in, sizeof (user_in), stdin);
    user_in = atoi (user_in_str);

    printf ("%i\n", user_in);
    */

    /* The magic begins */
    char yapp_path[sizeof (argv[1])] = argv[1], test_stdin[sizeof (argv[2])] = argv[2];
    int yapp_pipe[2];
    
    if (pipe (yapp_pipe))
      {
        printf ("%s:%i: FunctionCallingError:UnableToCreatePipeForChildProcess: cannot create pipe for child process.\n", PROGRAM_SOURCE, __LINE__);
        return 1;
      }

    /* UPGRADE: multiple yapp, modify yapp_status -> (int *) */
    int yapp_status, yapp_exit;
    pid_t yapp_pid;
    if ((yapp_pid = fork ()) >= 0)
      {
        /* SUPPORT: argv to yapp */
        char *yapp_argv[0]; // = {};
        char *yapp_env_argv[0]; // = {};
        if (yapp_pid == 0)
          {
            printf ("child pid: %i\n", getpid ());
            /* Child process area. */

            /* Check if already executable, if not, `gcc' */
            /* access() returns -1 if permission denied (i.e., not executable). */
            if (access (yapp_path, X_OK) == -1)
              {
                /*                     [0]  [1]       [2] [3]    */
                /* Currently limited: `gcc  source.c  -o  source` */
                // char *cat_compile_cmd[4], *compiler_path;

                /* <-- Check if env "CC" has any value here. --> */

                /* <-- UPGRADE: exec `/bin/gcc' natively from search path. --> */

                // #if (defined __linux__               \
                //      ||  defined __APPLE__)
                // /* <-- UPGRADE: get path w/ exec shell cmd. --> */
                // system ();
                // /* SUPPORT: Win32 */
                // #elif (defined WIN32)
                //     #if (defined __MINGW32__)
                //     #endif
                // #endif

                // cat_compile_cmd[0] = YAPP_COMPILER_ALIAS;
                // cat_compile_cmd[1] = yapp_path;
                // cat_compile_cmd[2] = "-o";
                // cat_compile_cmd[3] = LAB_CACHE_FILE;

                /* SUBSTITUTE: execve() */
                execl (GCC_PATH, yapp_path, GCC_OUTPUT_FLAG, LAB_CACHE_FILE);
                if (access (LAB_CACHE_FILE, X_OK) == -1)
                  {
                    printf ("%s:%i: FileCompilationError:OutputFilePermissionDenied: problem compiling input source file.\n", PROGRAM_SOURCE, __LINE__);
                    return 1;
                  }
              }

            /* BEGIN yapp execution */
            execve (LAB_CACHE_FILE, yapp_argv, yapp_env_argv);
            
            /* write to yapp stdin */
            for (int i = 0; i < /* stdin queue count */; i++)
              {
                write (yapp_pipe[1], , sizeof ());
                /* also write to report file */
                write (, , sizeof ());
              }

            /* read from yapp stout respectively */
            read (yapp_pipe[0], /* var for holding stdout */, sizeof ());
            /* write to report file */
            write (, , sizeof ());

            /* yapp stdin */
            // fork ()
            /* -------------------- 2022-01-04 -------------------- */

            exit (0);
          }
        else if (yapp_pid > 0)
          {
            printf ("parent pid: %i\n", getpid ());
            /* NOTICE: sizeof a native pointer. */
            if (waitpid (yapp_pid, &yapp_status, 0) == yapp_pid && WIFEXITED (yapp_status))
              {
                yapp_exit = WEXITSTATUS (yapp_status);
                printf ("yapp exit(%i)\n", yapp_exit);
              }
            else
              {
                printf ("%s:%i: ChildProcessTerminationError:ChildProcessExitedWithNon-Zero: an error occurs while terminating yapp process.\n", PROGRAM_SOURCE, __LINE__);
                return 1;
              }
          }
        else
          {
            printf ("%s:%i: ChildProcessCreationError:UnableToCreateChildProcess: cannot create yapp process.\n", PROGRAM_SOURCE, __LINE__);
            return 1;
          }
      }

    return 0;
}
/*
*   Reminders:
*       - ALWAYS `memcheck` before release. -- `Valgrind`
*   2DO:
*       [ ] APPLY getopt_long()
*       [ ] MAKE yep_write_log()
*       [ ] MAKE yep_json()
*   Plan-ahead:
*       [ ] UPGRADE : multiple yapp.
*/

#include <getopt.h>
#include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/dir.h>
#include <sys/errno.h>
#include <sys/param.h>
#include <sys/types.h>
// #include <time.h>
#include <unistd.h>

#include "yep.h"

#define MEASURE_EXEC_TIME 1

/* Custom functions. */
int is_on_supported_platform (void);

/* Custom declaration. */
static int exit_status;

/* ONLY 'return' at the end of main(). */
int
main (int argc, char **argv)
{
    yep_ok ok = dne;

    if (!YEP_IS_IN || !YEP_IS_ON || !is_on_supported_platform())
    {
        ok = false;
        /* <-- APPLY yep_write_log() here. --> */
    }

    /* <-- BREAK_00 --> */
    /* CREATE yapp child process. */
    if (ok > 0)
{
    /* <-- APPLY getopt_long() here. --> */
    /* "UPGRADE : multiple yapp." can develop from here. */
    pid_t yapp_pid;
    { /* LOCAL */
        pid_t is_pid0, is_pid1;
        for (int i = 0; i < 3; i++)
        {
            is_pid0 = fork ();
            is_pid1 = fork ();
            if ((is_pid0*is_pid1) == 0 && (is_pid0+is_pid1) != 0)
            {
                if (is_pid0 == 0)
                    yapp_pid = is_pid1;
                else
                    yapp_pid = is_pid0;
                break;
            }
        }
        /* ERROR cannot create a child process for yapp. */
        ok = false;
    /* LOCAL */ }
}

    /* <-- BREAK_01 --> */
    /* RETRIEVE yapp's stdin (if needed). */
    if (ok > 0)
{

}

    /* POST-YEP */
    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

int
is_on_supported_platform (void)
{
    /* APPLY yep_json() in here. */
    int res = 0;
    if (YEP_IS_IN && YEP_IS_ON)
        res = 1;
    else
        res = 0;
    return res;
}
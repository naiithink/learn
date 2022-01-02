/*
*   Reminders:
*       - ALWAYS `memcheck` before release. -- `Valgrind`
*   2DO:
*       [ ] APPLY getopt_long()
*       [ ] MAKE yep_write_log()
*       [ ] MAKE yep_json()
*   Plan-ahead:
*       [ ] UPGRADE : multiple yunit.
*/

#include <getopt.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/dir.h>
#include <sys/errno.h>
#include <sys/param.h>
// #include <sys/types.h>       :Legacy
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
    /* BREAK_00 */
    if (ok > 0)
{
    /* <-- APPLY getopt_long() here. --> */
    /* "UPGRADE : multiple yunit." can develop from here. */
    /* Lab area */
    pid_t yunit_pid;
    { /* LOCAL */
        pid_t is_pid0, is_pid1;
        for (int i = 0; i < 3; i++)
        {
            is_pid0 = fork ();
            is_pid1 = fork ();
            if ((is_pid0*is_pid1) == 0)
            {
                if (is_pid0 == 0)
                    yunit_pid = is_pid1;
                else
                    yunit_pid = is_pid0;
                break;
            }
        }
        /* ERROR cannot create a child process for yunit. */
        ok = false;
    /* LOCAL */ }
    /* BREAK_01 */
    if (ok > 0)
{
    
}
}
    /* Post-job area */

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
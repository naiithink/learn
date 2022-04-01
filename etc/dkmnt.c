#include <ftw.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define PROGRAM_NAME "dkmnt"

#if defined (__gnu_linux__)         \
    || defined (__linux__)          \
    || defined (linux)              \
    || defined (__linux)
#define OSTYPE 1
#define OSTYPE_ATTR "linux"
#elif !defined (OSTYPE)             \
      && defined (macintosh)        \
         || defined (Macintosh)     \
         || defined (__APPLE__)     \
            && defined (__MACH__)
#define OSTYPE 1
#define OSTYPE_ATTR "darwin"
#elif !defined (OSTYPE)             \
      && defined (_WIN16)           \
         || defined (_WIN32)        \
         || defined (_WIN64)
#define OSTYPE 2
#elif !defined (OSTYPE)
#define OSTYPE 0
#define OSTYPE_ATTR "windows"
#endif

static int exit_status;
static char *shell;
static char *docker;

int
which_docker (char **dockerpath);

int
main (int argc, char *argv[])
{
    int ok = 1;
    int somepid = 0;
    char *os_confirm = NULL;
    char *docker_path;
    const char *docker = "docker";
    const char run_args[] = { "run",
                              "-it",
                              "--name", argv[2],
                              "--mount", "type=bind,source=/Users/naiithink/entries,target=/mnt",
                              "--mount", "type=bind,source=\"$(readlink /Users/naiithink/entries/projects)\",target=/mnt/projects",
                              "--mount", "type=bind,source=\"$(readlink /Users/naiithink/entries/terminal)\",target=/mnt/terminal",
                              argv[1]
    };

    if (argc == 1)
    {
        fprintf (stderr, "This program requires at least 1 argument.\n");
        return 1;
    }

    if (!OSTYPE)
    {
        fprintf (stderr, "%s:\n\
ERROR: Unsupport OS (%s).\n", PROGRAM_NAME, OSTYPE_ATTR);
        ok = 0;
    }

    if (ok)
    {
        fprintf (stderr, "Your OS is %s.\n\
Is that correct? [Y/n]: ", OSTYPE_ATTR);
        fgets (os_confirm, PATH_MAX, stdin);

        switch (os_confirm[0])
        {
            case 'n':
            case 'N':
                ok = 0;
                break;
            
            default:
                ok = 1;
        }
    }

    if (ok)
    {
        shell = getenv ("SHELL");
        if (shell)
        {

        }
        which_docker (&docker);
    }
    else if (OSTYPE)
    {
        fprintf (stderr, "%s:\n\
ERROR: Unsupport OS (%s).\n", PROGRAM_NAME, OSTYPE_ATTR);
    }

    return exit_status = ok ? EXIT_SUCCESS
                            : EXIT_FAILURE;
}

int
which_docker (char **dockerpath)
{
    int somepid = -1;

    somepid = execle (shell, "which", "docker");

    if (!somepid)
    {
        execle (shell, "which", "docker");
    }
    else if (somepid > 0)
    {
        
    }
    else
    {
        fprintf (stderr, "ERROR: Cannot create a child process, try again later.\n");
    }
}
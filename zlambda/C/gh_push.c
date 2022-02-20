#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef __linux__
#include <linux/limits.h>
#else
#include <limits.h>
#if (defined WIN32)
#define PATH_MAX MAX_PATH
#elif (defined __APPLE__ && defined __MACH__)
#define YEP_ISON_MACINTOSH 1
#include <sys/sysctl.h>
#endif
#endif

#define PROGRAM_NAME "yep_lambda_01"
#define PROGRAM_VERSION_NOTE "eiei"
#define STR_IN_SIZE_T PATH_MAX

#define BIN_GIT_PATH "/usr/bin/git"

typedef enum { dne = -1, false, true } running_ok;
static int exit_status;

void
raise_err(char *err_des, char *guide_msg, char *file, int line);

void
raise_unknown_err(char *program_name, char *file, int line);

int
does_path_exist(char *path_str);

int
main(int argc, char **argv)
{
    running_ok ok = dne;

    if (argc == 2)
    {
        char commit_msg[STR_IN_SIZE_T];
        fprintf(stderr, "\
yep: commit then push to gh\n\
    คุณยังไม่ได้เพิ่ม commit message\n\
    พิมพ์ commit message (ctl + d เพื่อยกเลิก): ");
        fgets(commit_msg, STR_IN_SIZE_T, stdin);

        if (commit_msg == '\n')
        {
            fprintf(stderr, "\
yep: commit then push to gh\n\
    คุณยังไม่ได้เพิ่ม commit message\n\
    โปรดลองอีกครั้งในภายหลัง\n");
            ok = false;
        }

        if (ok != false)
        {
            if (does_path_exist(BIN_GIT_PATH) == 1)
            {
                int git_prog_num = 3;
                char git_run[git_prog_num][][STR_IN_SIZE_T] = { { "add", "." },
                        { "commit", argv[2] },
                        { "push", NULL }
                    };

                for (int i = 0; i < git_prog_num; i++)
                {
                    if (execv(BIN_GIT_PATH, git_run[i]))
                    {
                        raise_err("RunningGit:", git_run[i][0], __FILE__, __LINE__);
                        ok = false;
                        break;
                    }
                    if (i == (git_prog_num - 1))
                        ok = true;
                }
                if (ok == true)
                    fputs("Done.", stdout);
                else if (ok == dne)
                    raise_unknown_err(PROGRAM_NAME, __FILE__, __LINE__);
            }
            else
                raise_err("GitNotFound:", "Cannot execute `git' from the given path", __FILE__, __LINE__);
        }
        else
            raise_err("GitCommitMessageRequired:", "Please provide some commit message", __FILE__, __LINE__);
    }

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

void
raise_err(char *err_des, char *guide_msg, char *file, int line)
{
    fprintf(stderr, "\033[1m%s: \
\033[1;31m\
Error: \
\033[1;39m\
%s \
\033[0m\
%s\n\
\033[0m\n", PROGRAM_NAME, err_des, guide_msg, file, line);
}

void
raise_unknown_err(char *program_name, char *file, int line)
{
    fprintf(stderr, "\033[1m%s:\033[0m \n\
%s:%d: \
\033[1;31m\
InternalError: \
\033[1;39m\
An unknown error occurs.\033[0m\n",
            program_name, file, line);
    if (PROGRAM_VERSION_NOTE)
        fprintf(stderr, "--\n%s\n", PROGRAM_VERSION_NOTE);
}

int
does_path_exist(char *path_str)
{
    int res = 0;
    int have_permission = 0;

    if ((have_permission = access(path_str, F_OK)) == -1)
        res = 0;
    else if (have_permission == 0)
        res = 1;
    else
    {
        raise_unknown_err(PROGRAM_NAME, __FILE__, __LINE__);
        exit(-1);
    }

    return res;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "yep.h"

// Used as the shell alias
#define PROGRAM_NAME "yep"

// yep properties
#define FILE_NAME "yep.c"
#define PROGRAM_VERSION 
#define YEP_ISSUE_REPORT "https://github.com/naiithink/foo-i/issues"

#if (defined YEP_IS_IN && defined YEP_IS_ON)
#define SUPPORTED_PLATFORM 1
#else
#define SUPPORTED_PLATFORM 0
#endif

// Platform info
typedef struct
{
    char *os;
    char *arch;
    enum {os, arch, BOTH, END} *error;
}
platform;

// Support Check
int platform_support_check (void);

// Raise user helper
void about_this_yep (void);
void yep_helper (void);

// Get shell
char *get_shell ();

// Return char * type executable command of the host OS
char *get_bash_command (char *command);
char *get_cmd_command (char *command);
char *get_pwsh_command (char *command);
char *native_command(char *os, char *command);

// Utilities ------------------------------------------
void about_this_yep (void);
int strlen (char *str);
int strcmp (char *a, char *b, int ignore_case);
    // ignore_case ? Ignore case : Case sensitive

// Dynamic memory allocation
typedef struct eiei
{
    char *str;
    struct eiei *next;
}
eiei;

// Verified OS
static platform *this_platform;

// Exit status
static exit_status;

int
main (int argc, char **argv)
{
    ok_status ok;
    clock_t start, end;

    char *shell;
    char *user_input_os;

    // Program start time
    start = clock();

    if (platform_support_check ())
    {
        ok = no;
    }
    else
    {
        shell = get_shell();

        // To call a function by its pointer
        // int *fn = &yep_help;
        // puts("%p", fn);

        int status;

        // Check if the user is asking for help.
        if (argc == 1 || strcmp(argv[1], "--help", 1) || strcmp(argv[1], "-h", 1))
        {
            yep_help();
            ok = EXIT_FAILURE;
        }

        char *cmd = "open -a \"Visual Studio Code\" ";
        
        char *combined;
        combined = malloc(((strlen(cmd)) + (strlen(argv[1]) + 1)) * sizeof(char));
        
        if (combined == NULL)
        {
            printf("yep-dev:%s:%s: Could not find an available memory region, terminated.\n", FILE_NAME, __LINE__);
            return EXIT_FAILURE;
        }

        int i = 0;

        for (int c = 0; c < strlen(cmd); c++)
        {
            combined[c] = cmd[c];
            i = c + 1;
        }

        for (int j = 0; j < strlen(argv[1]); j++)
        {
            combined[i] = argv[1][j];
            if (j == strlen(argv[1]))
            {
                combined[i] = '\0';
                break;
            }
            i++;
        }

        FILE *file, *run;

        file = fopen (argv[1], "r");
        run = popen (combined, "r");
        fclose (file);
        pclose (run);
        free(combined);
    }

    // Program almost-end time
    end = clock();

    // CPU elapsed time
    double elapsed = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f s\n", elapsed);

    return ok ? EXIT_FAILURE : EXIT_SUCCESS;
}

void
about_this_yep (void)
{
    puts ("");
}

void
yep_helper (void)
{
    fputs("\
    This is the help page.\n\
", stdout);

    fputs ('\a', stdout);
}

char *
get_shell (char *verified_os)
{
    char *result;
    FILE *shell, *shell_test_exit;

    switch ()

    if (! strcmp (YEP_IS_IN, "linux", 1) || strcmp (YEP_IS_IN, "darwin", 1))
    {
        shell = popen ("echo $0", "r");
        shell_test_exit = popen ("echo $?", "r");
        if (shell != NULL && shell_test_exit == 0)
        {
            result = shell;
        }
    }
    else if (! strcmp (YEP_IS_IN, "win32", 1))
    {
        shell = popen ("$PSVersionTable.PSVersion", "r");
        shell_test_exit = popen ("", "r");
        if (shell != NULL && shell_test_exit == "True")

    }
}

int
platform_support_check (void)
{
    if (! SUPPORTED_PLATFORM)
    {
        FILE *yep_is_in, *yep_is_on, *p1, *p2;

        yep_is_in = popen ("uname", "r");
        p1 = popen ("echo $?", "r");
        if (p1 != 0)
        {
            for (int i = 0; )
            yep_is_in = open ("WinVer", "r");
            p1 = popen ("%%errorvalue%%", "r");
            if (p1 == "True")
            {
                this_platform->os = "win32";
            }
            else
            {
                
            }
        }
        yep_is_on = popen ("uname -p", "r");
        p2 = popen ("echo $?", "r");

        if (! strcmp(yep_is_in, YEP_IS_IN, 1) && ! strcmp(yep_is_on, YEP_IS_ON, 1))
        {
            this_platform->os = YEP_IS_IN;
            this_platform->arch = YEP_IS_ON;
        }
        else if (! strcmp(yep_is_in, YEP_IS_IN, 1) || ! strcmp(yep_is_on, YEP_IS_ON, 1))
        {
            if (strcmp(yep_is_in, YEP_IS_IN, 1))
            {
                this_platform->error = "os";
            }
            else
            {
                this_platform->error = "arch";
            }
        }
        else if (strcmp(yep_is_in, YEP_IS_IN, 1) && strcmp(yep_is_on, YEP_IS_ON, 1))
        {
            this_platform->error = BOTH;
        }
        pclose (yep_is_in);
        pclose (yep_is_on);
        pclose (p1);
        pclose (yep_is_on);

        if (this_platform->error != NULL)
        {
            fputs ("\
yep: ไม่สามารถระบุระบบปฏิบัติการณ์ของคุณได้\n\
    --\n\
    คุณสามารถลองบอกใบ้ชื่อระบบปฏิบัติการของคุณให้ yep ได้\n\
    เช่น `linux`, `mac`, windows`\n\
    หากคุณไม่ทราบ ให้กด Enter\n\
    --\n\
    พิมพ์ที่นี่: \
", stdout);

            char user_input_os[strlen(stdin)+1];
            scanf("%s", user_input_os);

            if (user_input_os == NULL)
            {
                fputs("\
yep: ไม่สามารถระบุชื่อของระบบปฏิบัติการณ์ได้\n\
    --\n\
    yep ไม่สามารถทำงานได้เนื่องจากไม่ทราบชื่อของระบบปฏิบัติการณ์\n\
    โปรดรายงานของผิดพลาดนี้ให้กับผู้พัฒนาที่ \
", stdout);
                printf("%s\n", YEP_ISSUE_REPORT);
            }
            else
            {
                if (! strcmp(user_input_os, "linux", 1))
                {
                    printf("yeah\n");
                }
                else
                {
                    printf("%s\n", user_input_os);
                }
            }
        }
        else
        {

        }

        pclose(yep_is_in);
    }
    return ;
}

int
get_terminal_cols ()
{
    int cols;
    char *cmd;

    if (! strcmp(this_platform->os, "linux", 1) || ! strcmp(this_platform->oss, "darwin", 1))
    {
        cmd = "tput cols";
    }
    else if (! strcmp(this_platform->os, "win32", 1))
    {
        cmd = "";
    }

    /*
    if (cmd != NULL)
    {
        FILE *cols;

        cols = 
    }
    */
}

char *
get_bash_command (char *command)
{
    char *native_command;
    switch (command)
    {
        case "get_term_width":
            native_command = "tput cols";
            break;
    }
}

char *
get_cmd_command (char *command)
{

}

char *
get_pwsh_command (char *command)
{
    
}

char *
native_command (char *verified_os, char *command)
{
    char *native_command;
    switch (verified_os)
    {
        case "linux":
        case "darwin":
            native_command = get_bash_command (command);
            break;
        case "win32":
            native_command = get_cmd_command (command);
            break;
    }
}

int
strlen (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// ignore_case ? Ignore case : Case sensitive
int
strcmp (char *a, char *b, int ignore_case)
{
    const int switch_case = 32;
    int try_switching_case = 0;
    int tester;
    int result;
    if (strlen(a) != strlen(b))
    {
        result = -1;
    }
    else
    {
        // Ignore case
        if (ignore_case != NULL || ignore_case != 0)
        {
            try_switching_case = switch_case;
        }

        for (int i = 0, n = strlen(a); i < n; i++)
        {
            if ((int) (a[i]) >= 65 && (int) (a[i]) <= 90)
            {
                tester = try_switching_case;
            }
            else if ((int) (a[i]) >= 97 && (int) (a[i]) <= 122)
            {
                tester = try_switching_case * -1;
            }
            // Case-sensitive
            else
            {
                tester = 0;
            }

            if (a[i] != b[i] && a[i]+tester != b[i])
            {
                result = -1;
                break;
            }
            result = 0;
        }
    }

    return result;
}
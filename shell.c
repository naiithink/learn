#include <stdio.h>
#include <stdlib.h>

#include "shell.h"

#define YEP_ISSUE_REPORT "https://github.com/naiithink/foo-i/issues"

#if (defined YEP_IS_IN && defined YEP_IS_ON)
#define SUPPORTED_PLATFORM 1
#else
#define SUPPORTED_PLATFORM 0
#endif

// Raise user helper
void yep_help ();

// Return char * type executable command of the host OS
char *get_bash_command (char *command);
char *get_cmd_command (char *command);
char *get_pwsh_command (char *command);
char *native_command(char *os, char *command);

// Utilities ------------------------------------------
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
static char *verified_os;

int
main (int argc, char **argv)
{
    char *user_input_os;

    if (! SUPPORTED_PLATFORM)
    {
        FILE *yep_is_in;

        yep_is_in = popen ("uname", "r");

        if (! strcmp(yep_is_in, YEP_IS_IN, 1))
        {
            verified_os = YEP_IS_IN;
        }
        else if (yep_is_in == NULL)
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

    // To call a function by its pointer
    // int *fn = &yep_help;
    // puts("%p", fn);

    int status;

    // Check if the user is asking for help.
    if (argc == 1 || strcmp(argv[1], "--help", 1) || strcmp(argv[1], "-h", 1))
    {
        yep_help();
        status = EXIT_FAILURE;
    }

    char *cmd = "open -a \"Visual Studio Code\" ";
    
    char *combined;
    combined = malloc(((strlen(cmd)) + (strlen(argv[1]) + 1)) * sizeof(char));
    
    if (combined == NULL)
    {
        printf("Could not find an available memory region, terminated.\n");
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

    // return exit_status = status ? EXIT_FAILURE : EXIT_SUCCESS;
}

void
yep_help ()
{
    puts("\
yep: พิมพ์คำสั่งด้วยสิครับพี่น้อง\n\
    เช่น\n\
    `yep [ตัวเลือก] <ชื่อไฟล์แบบเต็ม path หรือไฟล์ที่อยู่ใน dir ปัจจุบัน>`\n\
    e.g.\n\
    yep --eiei\n\
    ู^^^^^^^^^^ ลองดูวว\n\
");
}

int
get_terminal_cols ()
{
    int cols;
    char *cmd;

    if (! strcmp(verified_os, "linux", 1) || ! strcmp(verified_os, "darwin", 1))
    {
        cmd = "tput cols";
    }
    else if (! strcmp(verified_os, "win32", 1))
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
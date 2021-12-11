#include <stdio.h>
#include <stdlib.h>

// #define EXIT_FAILURE 0
// #define EXIT_SUCCESS 1

// Raise user helper
void yep_help ();

// Return char * type executable command of the host OS
char *native_command(char *os, char *command);

// Utilities
int strlen (char *str);
int strcmp (char *a, char *b);

static int exit_status;

// Dynamic memory allocation
typedef struct eiei
{
    char *str;
    struct eiei *next;
}
eiei;

typedef struct
{
    
}
function;

int
main (int argc, char **argv)
{
    int *fn = &yep_help;
    printf("%p\n", fn);

    

    /*
    int status;

    // Check if user is asking for help.
    if (argc == 1 || strcmp(argv[1], "--help") || strcmp(argv[1], "-h"))
    {
        yep_help();
        status = EXIT_FAILURE;

    }
    */

    /*
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
    */

    // return exit_status = status ? EXIT_FAILURE : EXIT_SUCCESS;
}

void
yep_help ()
{
    puts("\
    พิมพ์คำสั่งด้วยสิวะ\n\
    เช่น\n\
    yep [ตัวเลือก] <ไฟล์ แบบเต็ม path หรือที่อยู่ใน dir ปัจจุบัน>\n\
    e.g.\n\
    yep --eiei\n\
    ู    ^^^^^^ ลองดูวว\n\
    ");
}

char *
native_command (char *os, char *command)
{
    
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

int
strcmp (char *a, char *b)
{
    int result;
    if (strlen(a) != strlen(b))
    {
        for (int i = 0, n = strlen(a); i < n; i++)
        {
            if (a[i] != b[i])
            {
                result = -1;
            }
        }
        result = 0;
    }
    else
    {
        result = -1;
    }
    
    if (result != 0)
    {
        printf("โอ๊ะ บางอย่างผิดพลาดที่ %i\n", __LINE__);
    }
    return result ? 0 : -1;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "yep.h"

// Used as the shell alias
#define PROGRAM_NAME ""

// yep properties
#define FILE_NAME ""
#define PROGRAM_VERSION 
#define YEP_ISSUE_REPORT ""

// Platform info
#if (defined YEP_IS_IN && defined YEP_IS_ON)
#define SUPPORTED_PLATFORM 1
#else
#define SUPPORTED_PLATFORM 0
#endif

typedef struct
{
    char *os;
    char *arch;
    enum {os, arch, BOTH, END} *error;
}
platform;

// Platform support check
int platform_support_check (void);

const enum {bash, zsh, csh, cmd, powershell} shells;

// Raise user helper
void about_this_yep (void);
void yep_helper (void);

// Get shell
char *get_shell (void);

// Return char * type executable command of the host OS
char *native_command(char *verified_shell, char *command);

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

}
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef enum {no, yes} ok_status;
typedef char *word;
typedef word *phrase;

// More dynamic
/*
typedef struct phrase
{
    word word;
    struct *next phrase;
}
phrase;
*/

typedef struct
{
    int transitive;
    int intransitive;
}
_verb_;

enum {NOUN, ADJECTIVE, VERB, ADVERB} en_type;

void about_this_program (void);
void help (void);
void guide (word arg);
int check_type (word word);

static exit_status;

int main(int argc, char **argv)
{
    FILE *bell;
    bell = popen ("tput bel", "r");
    pclose (bell);

    fputs ("\a", stdout);

    ok_status ok;
    word Word;
    phrase Phrase;
    if (argc == 1)
    {
        help ();
        ok = no;
    }
    else if (argc == 2)
    {
        Word = argv[1];
    }
    else if (argc > 2)
    {
        
    }

    return exit_status = ok ? EXIT_SUCCESS : EXIT_FAILURE;
}

void
about_this_program (void);{

}

int
yep_helper (void)
{
    printf("This is the help page.\n");

    FILE *bell, *nl;
    bell = popen ("echo $'\\a'", "r");
    nl = popen ("echo $'\n'", "r");
    pclose (bell);
    pclose (nl);
}

void
guide (word arg)
{

}

int
check_type (word word)
{

}
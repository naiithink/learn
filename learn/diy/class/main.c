#include <stdio.h>
#include <string.h>

/* #include "modman.h"

int
main (void)
{
    modman

    return 0;
} */

typedef struct pstring_t
{
    char *chars;
    int (*length) (void *);
}
PString;

int length (void *self)
{
    return strlen (((PString *) self)->chars);
}

PString
initializeString (void)
{
    PString str;
    str.length = &length;
    return str;
}

int
main (void)
{
    PString p = initializeString ();

    p.chars = "Hello";

    printf ("Length: %i\n", p.length (&p));

    return 0;
}
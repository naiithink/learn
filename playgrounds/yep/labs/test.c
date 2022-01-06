#include <stdio.h>
#include <stdlib.h>

#define PROGRAM_NAME "tester"

int main(void)
{
        fprintf (stderr, "\033[1m%s: \
Invalid input.\
\033[0m\n", PROGRAM_NAME);
}
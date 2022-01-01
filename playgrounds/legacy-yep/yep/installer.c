/*
*       Add man
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef __GNUC__
#define 
#endif

int
main(void)
{
    char *gcc_path = secure_getenv("");
    char *env = secure_getenv("PWD");
    printf("%s\n", env);
}
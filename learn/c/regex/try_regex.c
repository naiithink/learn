/*
 * IMPORTANT: need further research on buffer size.
 */

#include <regex.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    regex_t p;
    int comp_result = 0;
    
    const char *word = argv[1];

    comp_result = regcomp(&p, "[a-z]", REG_BASIC);

    if (comp_result == 0)
        printf("Compilation succeeded.\n");
    else
        printf("Compilation failed.\n");

    return 0;
}
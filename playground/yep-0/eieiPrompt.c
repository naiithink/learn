#include <stdio.h>
#include "shell.h"


void print_prompt1(void)            // PS1
{
    fprintf(stderr, "อิอิ ");
}

void print_prompt2(void)            // PS2: for multi-line command
{
    fprintf(stderr, "อิ+ ");
}
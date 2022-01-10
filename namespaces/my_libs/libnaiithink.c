#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

typedef node *list;

int get_int(char *prompt, int size, FILE * restrict stream)
{
    char *raw_input;
    if (prompt)
        fputs(prompt, stdout);
    
    fgets();
}
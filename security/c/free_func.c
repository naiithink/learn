#include <stdio.h>
#include <stdlib.h>

void term(void)
{
    exit(1);
}

int main(void)
{
    int *pn = malloc(sizeof *pn);

    term();

    free(pn);
    return 0;
}

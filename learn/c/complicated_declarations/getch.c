#include <stdio.h>

#include "getch.h"

int getch(void)
{
    return (bufp > 0)
            ? buf[--bufp]
            : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        fprintf(stderr, "%s: too many characters\n", __func__);
    else
        buf[bufp++] = c;
}

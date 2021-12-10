#include <stdio.h>

int
main (void)
{
    FILE *wd;
    char c;

    wd = popen ("pwd", "r");

    if (wd == NULL)
    {
        printf ("Failed.\n");
        return 1;
    }
    while ((c=fgetc(wd)) != EOF)
    {
        putchar(c);
    }
    printf("Done.\n");
    pclose (wd);

    return 0;
}
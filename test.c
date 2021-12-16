#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

char *
str_cat (char *fmt, ...)
{
    char *s;
    va_list ap, ap2;
    va_start (ap, fmt);
    while (*fmt)
    {
        s = va_arg(ap, char *);
        printf("%s\n", s);
    }
    va_end (ap);
    va_end (ap2);
}

int main(int argc, char **argv)
{
    char *file_name ; // , *wd = getenv("PWD");
    FILE *source_file;

    if (argc > 1)
    {
        file_name = argv[1];
    }

    str_cat ("this is", argv[1]);

    return 0;
}
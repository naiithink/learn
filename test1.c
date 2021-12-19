#include <stdio.h>

int main(void)
{
    FILE *from_stdout;
    char from_file;

    printf("> ");
    fputs("hello\n", stdout);

    from_stdout = freopen("/dev/stdout", "r", stdout);
    fgets(from_file, 10, from_stdout);

    printf("< %s\n\n", from_file);

    return 0;
}
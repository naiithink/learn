#include <stdio.h>

int main(void)
{
    FILE *tty_out, *out_str;
    char *to_print;

    tty_out = popen("echo hello >> /dev/stdout", "w");
    out_str = fopen(stdout, "r");
    printf("foo\n");
    fgets(to_print, sizeof("hello")+1, out_str); //
    // fgets(to_print, sizeof("hello")+1, stdout);
    printf(">> %s\n", to_print);

    pclose(tty_out);
    fclose(out_str);
}
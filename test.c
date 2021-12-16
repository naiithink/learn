#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *out;
    FILE *f_out1, *tty_out, *tty_in, *f_out2;

    printf("#1\n");

    tty_out = popen("echo world >> /dev/stdout", "w");
    f_out2 = fopen(stdout, "r");
    printf(">> %s\n", f_out2);
    printf("--");

    fclose(f_out2);
    pclose(tty_out);

    tty_out = popen("echo world >> /dev/stdin", "w");
    f_out2 = fopen(stdin, "r");
    printf(">> %s\n", f_out2);
    printf("--");

    fclose(f_out2);
    pclose(tty_in);

    printf("#2\n");

    fputs("hello\n", stdout);
    f_out1 = fopen(stdout, "r");
    fgets(out, sizeof(f_out1)+1, f_out1);
    printf("> %s\n", out);

    fclose(f_out1);
}
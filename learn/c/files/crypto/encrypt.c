#include <limits.h>
#include <stdio.h>
#include <stdint.h>

void encrypt(FILE *);

int main(int argc, char **argv)
{
    if (argc < 3)
        return 1;

    FILE *fp_src;
    FILE *fp_encrypted;
    char *path = argv[1];
    char *outf_path = argv[2];
    int8_t buffer[PATH_MAX];
    int8_t ch;

    fp_src = fopen(path, "rb");
    fp_encrypted = fopen(outf_path, "w+x");

    ch = fgetc(fp_src);

    while (ch != EOF)
    {
        fputc(ch + 100, fp_encrypted);
        ch = fgetc(fp_src);
    }

    fclose(fp_src);
    fclose(fp_encrypted);

    return 0;
}

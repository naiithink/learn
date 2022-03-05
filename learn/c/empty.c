typedef struct _IO_FILE *FILE;

extern FILE *stdin;
#define stdin stdin

int printf(const char *format, ...);
char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream);

int main(void)
{
    char s[10];

    fgets(s, 10, stdin);

    printf("%s", s);

    return 0;
}
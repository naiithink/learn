#include <stdio.h>

typedef char *string;

void printS(void) { printf("string\n"); }
void printI(void) { printf("int\n"); }

#define _printS() (printS())
#define _printI() (printI())

#define TYPE(x) _Generic( x,                \
                        int: "int",         \
                        char: "char",       \
                        double : "double",  \
                        string : "string",  \
                        default : "other"   )

/*
int main(void)
{
    int i = 1;
    char c = 'c';
    float f = 1.0f;
    char *s = "hello";

    fprintf(stderr, "%s\n", TYPE(i));
    fprintf(stderr, "%s\n", TYPE(c));
    fprintf(stderr, "%s\n", TYPE(f));
    fprintf(stderr, "%s\n", TYPE(s));
    fprintf(stderr, "%s\n", TYPE(1.0/2));

    return 0;
}
*/
#include <stdio.h>

int
main (void)
{
    char c = 'a';
    printf("%p\n", &c);

    char *x = "9ello";
    printf(":: %p\n", ((int) &x[0]) - 10);
    printf(":: %p\n", ((int) &x[0]) - 9);
    printf(":: %p\n", ((int) &x[0]) - 8);
    printf(":: %p\n", ((int) &x[0]) - 7);
    printf(":: %p\n", ((int) &x[0]) - 6);
    printf(":: %p\n", ((int) &x[0]) - 6);
    printf(":: %p\n", ((int) &x[0]) - 5);
    printf(":: %p\n", ((int) &x[0]) - 4);
    printf(":: %p\n", ((int) &x[0]) - 3);
    printf(":: %p\n", ((int) &x[0]) - 2);
    printf(":: %p\n", ((int) &x[0]) - 1);
    printf("%p\n", &x[0]);
    printf("%p\n", &x[1]);
    printf("%p\n", &x[2]);
    printf("%p\n", &x[3]);
    printf("%p\n", &x[4]);
    printf(":: %p\n", &x[5]);

    printf(":: %c\n", ((int) x[0]) - 10);
    printf(":: %c\n", ((int) x[0]) - 9);
    printf(":: %c\n", ((int) x[0]) - 8);
    printf(":: %c\n", ((int) x[0]) - 7);
    printf(":: %c\n", ((int) x[0]) - 6);
    printf(":: %c\n", ((int) x[0]) - 5);
    printf(":: %c\n", ((int) x[0]) - 4);
    printf(":: %c\n", ((int) x[0]) - 3);
    printf(":: %c\n", ((int) x[0]) - 2);
    printf(":: %c\n", x[0] - 99);
    printf("%c\n", x[0]);
    printf("%c\n", x[1]);
    printf("%c\n", x[2]);
    printf("%c\n", x[3]);
    printf("%c\n", x[4]);
    printf(":: %c\n", x[5]);
    
    char d = 'z';
    printf("%p\n", &d);
}
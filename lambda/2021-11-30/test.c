#include <stdio.h>

int main(void)
{   
    char ppp = '?';

    char x;
    char y;
    char z[3];
    printf(">>> ");
    // scanf("%c %c", &x, &y);
    // printf("123456");
    printf("%c\n", &x);
    printf("%c\n", &y);
    printf("%i %c\n", z, &z);
    printf("%c\n", z[0]);
    printf("%c\n", z[1]);
    printf("%c\n", z[2]);
    printf("0 == %c\n", z[3]);


    // printf("%p\n", )
    
    // printf("hello, \r123456\r world\n");


    char* s = "hi, \r";

    // printf("\r\n");
    // printf("%c\n");

}
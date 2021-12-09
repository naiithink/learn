#include <stdio.h>

int main(void)
{
    // void a;
    char b = '\0';
    char *str = "123\0";
    char *str1 = "123";
    char str2[4] = {'1', '2', '3'}; // , '\0'};

    printf("char size: %i\n", sizeof(char));
    // printf("\\0 size: %i\n", sizeof(b));
    printf("hello\n");
    // printf("\0");
    printf("void size: %i\n", sizeof(void));
    printf("size of \"123\\0\": %i\n", str);
    printf("size of \"123\": %i\n", str1);
    printf("int: %i\n", sizeof(int));
    printf("%s\n", *str2);
    
    /*
    if (a == b)
        printf("eq\n");
    else
        printf("!eq\n");
    */
}
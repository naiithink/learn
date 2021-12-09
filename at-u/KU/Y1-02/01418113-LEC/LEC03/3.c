#include <stdio.h>

int main(void)
{
    // char *str0 = "";
    putchar(('\0', 'a', 'b'));
    printf("\n");
    printf("void size: %i\n", sizeof(void));
    printf("char size: %i\n", sizeof(char));

    char *str0 = "123";
    printf("%s\n", str0);
    printf("str0 size: %i\n", sizeof(str0));
    char *str1 = "123\0";
    printf("%s\n", str1);
    printf("str1 size: %i\n", sizeof(str1));
    char *str2 = "\0\\123";
    printf("%s\n", str2);
    printf("str1 size: %i\n", sizeof(str2));
}
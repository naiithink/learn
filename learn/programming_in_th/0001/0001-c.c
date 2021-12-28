#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a_str[5], b_str[5], c_str[5];
    register unsigned short int a = 0, b = 0, c = 0, sum = 0;

    fgets(a_str, sizeof(a_str), stdin);
    fgets(b_str, sizeof(b_str), stdin);
    fgets(c_str, sizeof(c_str), stdin);

    if ( (a=atoi(a_str)) < 0 || a > 30 || (b=atoi(b_str)) < 0 || b > 30 || (c=atoi(c_str)) < 0 || c > 40 )
        return 1;

    sum = a + b + c;

    if (sum > 79)
        printf("A");
    else if (sum > 74)
        printf("B+");
    else if (sum > 69)
        printf("B");
    else if (sum > 64)
        printf("C+");
    else if (sum > 59)
        printf("C");
    else if (sum > 54)
        printf("D+");
    else if (sum > 49)
        printf("D");
    else
        printf("F");
    printf("\n");

    return 0;
}
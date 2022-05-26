#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a_str[12], b_str[12];
    unsigned int a = 0, b = 0;

    fgets(a_str, sizeof(a_str), stdin);
    fgets(b_str, sizeof(b_str), stdin);

    if ( a < 0 || b < 0 || (a=atoi(a_str)) > 1000000000 || (b=atoi(b_str)) > 1000000000 )
        return 1;

    printf("%u\n", a+b);

    return 0;
}
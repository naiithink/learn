#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char n_str[10];
    int n = 0;

    fputs("Enter a single-digit integer: ", stdout);
    fgets(n_str, sizeof(n_str), stdin);
    n = atoi(n_str);
    
    n += 10;
    printf("%i\n", n);

    return 0;
}
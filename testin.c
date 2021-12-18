#include <stdio.h>

int main(void)
{
    char input[10];

    fputs("Enter: ", stdout);
    fgets(input, 10, stdin);

    printf("%s\n", input);
}

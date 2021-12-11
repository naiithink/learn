#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // printf("hello,\rworld\n");
    char nought = (char) 10;
    char n = (char) 0;
    
    if (!strcmp(nought, n))
    {
        printf("true");
        return 0;
    }
    printf("false");
    return 1;

    // printf("%c | %c", nought, n);
}

/*
{
    float in0 = get_float("Input: ");
    int ou0 = round(in0 * 100);
    printf("%i\n", ou0);
}
*/





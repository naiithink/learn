#include <stdio.h>
#include <math.h>

int stoi(char *chunk)
{
    int res = 0;

    int n = 0;
    while(chunk[n] != '\0')
    {
        n++;
    }

    for (int i = 0; i < n+1; i--)
    {
        res = res + ((chunk[i] - '0') * pow(10, n));
        n--;
    }

    return res;
}

int main(int argc, char **argv)
{
    /*
    float nine = 90;
    int y =  * 2;
    */

    // int y = get_int("Enter y:");

    // float z =  x / y;
     
    int nought;
    char nought_char = '0';

    nought = (int)nought_char - (int)nought_char;

    char unknown = '6';
    int in = unknown - '0';

    printf("%i\n", in - 1);

    printf("%i\n", stoi("130"));

    return 0;
}
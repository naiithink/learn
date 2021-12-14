#include <stdio.h>

int main(int argc, char **argv)
{
    int n = 0;
    if (argv[1])
    {
        printf("%i\n", n);
        return 0;
    }

    {
        int n = 1;
        printf("%i\n", n);
        return 1;
    }

    {
        int n = 2;
        printf("%i\n", n);
        return 2;
    }

}
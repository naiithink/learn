// #include <stdio.h>
#include <unistd.h>

int return_10(void)
{
    return 10;
}

#define RETURN_10 return_10()
#define A() RETURN_10()
// #define A() printf("1234567890")

int main(int argc, char **argv)
{
    int n = 10;

    printf("hello, world\n");

    printf(
        #if (argc == 1)
            "argc == 1\n"
        #else
            "argc != 1\n"
        #endif
    );

    if (argc == 1)
        printf("argc == 1\n");
    else
        printf("argc != 1\n");

    printf(
        #if (A == 10)
            "A == 10\n"
        #else
            "A != 10\n"
        #endif
    );

    return 0;
}

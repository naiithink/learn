#include <stdio.h>

void greet(char *s)
{
    printf("Hello, %s\n", s);
}

int main(int argc, char **argv)
{
    void (*greet_p)(char *) = &greet;

    // (*greet_p)("Nai");
    greet_p("Nai");

    return 0;
}

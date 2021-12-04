#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    float x = get_int("x: ");

    // Prompt user for y
    float y = get_int("y: ");

    // Divide x by y
    float z = x / y;

    // Perform addition
    printf("%.50f\n", z);
}
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *process = popen("echo \"hello, world\"", "r");

    pclose(process);

    return 0;
}
#include <stdio.h>

int main(void)
{
    FILE *proc = popen("echo \"hello, world\"", "r");

    pclose(proc);
    return 0;
}
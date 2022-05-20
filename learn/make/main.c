#include <stdio.h>

#include "file1.c"
#include "file2.c"
#include "file3.c"

int main(void)
{
    echo1();
    echo2();
    echo3();

    printf("ended.\n");

    return 0;
}
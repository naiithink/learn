#ifndef _POSIX_C_SOURCE
#define _POSIX_C_SOURCE 200809L
#endif

#include <search.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int main(void)
{
    char host[_POSIX_HOST_NAME_MAX+1];

    gethostname(host, _POSIX_HOST_NAME_MAX);

    printf("%ld\n", _POSIX_C_SOURCE);
    printf("%s\n", host);
    return 0;
}
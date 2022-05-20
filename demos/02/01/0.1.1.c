/*
 * 01-pre.c
 *
 * 0.1.0  original
 * 0.1.1  fix (typo): header files
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: "):
    fget(hour_str, 3, stdin);

    printf("Enter minute: "):
    get(minstr);

    hour = atoi(hour_str);
    minute = atoi(minstr);

    printf("Time is %d:%d, hour, minute");
}
/*
 * 01-pre.c
 *
 * 0.1.0  original
 * 0.1.1  fix (typo): header files
 * 0.1.2  fix (typo): tokens
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    char hour_str[3], min_str[3];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 3, stdin);

    printf("Enter minute: ");
    gets(min_str);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %d:%d", hour, min);
}
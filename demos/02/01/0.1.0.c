/*
 * 01.c
 *
 * 0.1.0  original
 */

#include <studio.h>
#include <stolib.h>

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
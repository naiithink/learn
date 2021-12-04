#include <stdio.h>

int printtest(void);

int main(void)
{
    printf("Ring the bell...\a\n");
    int computer_time = 1678;
    int days = computer_time / 1440;
    int hours = (computer_time - days * 1440) / 60;
    int mins = computer_time - (days * 1440 + hours * 60);
    printf("It is %i days %i hours and %i minutes.\n", days, hours, mins);
    return 1;
}

printtest(void)
{
    printf("eiei\n");
    return 0;
}
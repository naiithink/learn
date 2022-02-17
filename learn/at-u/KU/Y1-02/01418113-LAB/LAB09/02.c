#include <stdio.h>

typedef enum { SUN, MON, TUE, WED, THU, FRI, SAT } DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int aWeek = 7;
    int mi = 0;
    int wptr = 2;
    int aMon[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 };

    for (int m = 1; m < month; m++)
    {
        for (int d = 1, daylim = aMon[mi++]; d < daylim && d < day; d++)
        {
            wptr++;
            if (wptr >= aWeek)
                wptr = 0;
            printf("%d\n", );
        }
        d = 1;
    }

    return wptr;
}

int main()
{
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);
    dow = findDayOfWeek(day, month);
    printf("Day:%d Month:%d of Year 2013 is ", day, month);
    switch(dow){
        case 0:printf("Sunday.\n"); break;
        case 1: printf("Monday.\n"); break;
        case 2: printf("Tuesday.\n"); break;
        case 3: printf("Wednesday.\n"); break;
        case 4: printf("Thursday.\n"); break;
        case 5: printf("Friday.\n"); break;
        case 6: printf("Saturday.\n"); break;
    }
}
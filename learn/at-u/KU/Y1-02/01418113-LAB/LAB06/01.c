#include <stdio.h>
#include <stdlib.h>

#define STR_IN_SIZE 12

int isnumchar(char c)
{
    if (c > 47 && c < 58)
        return 1;
    else
        return 0;
}

int isupperchar(char c)
{
    if (c > 64 && c < 123)
    {
        if (c < 91)
            return 1;
        else if (c > 96)
            return 0;
    }
    return -1;
}

int main(void)
{
    char time12_str[STR_IN_SIZE];
    char temp_time[5] = "\0\0\0\0";
    int is_pm = -1, temp_index = 0;
    unsigned int secs = 0, hh = 0, mm = 0;
    void *temp_time_hr, *temp_time_min;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    fgets(time12_str, STR_IN_SIZE, stdin);

    for (int i = 0; time12_str[i] != '\0'; i++)
    {
        if (isnumchar(time12_str[i]))
        {
            temp_time[temp_index] = time12_str[i];
            temp_index++;
        }
        else if (time12_str[i] == 32)
        {
            if (time12_str[i+2] == 'm' || time12_str[i+2] == 'M')
            {
                switch (time12_str[i+1])
                {
                    case 'P':
                    case 'p':
                        if (isupperchar(time12_str[i+1]) == isupperchar(time12_str[i+2]))
                        {
                            is_pm = 1;
                            break;
                        }
                    case 'A':
                    case 'a':
                        if (isupperchar(time12_str[i+1]) == isupperchar(time12_str[i+2]))
                        {
                            is_pm = 0;
                            break;
                        }
                    default:
                        fprintf(stderr, "Unmatched case for `%c%c'.\n", time12_str[i+1], time12_str[i+2]);
                        exit(1);
                    break;
                }
            }
        }
    }

    if (temp_index < 4)
    {
        char *temp_time_min = &temp_time[1];
        secs += atoi(temp_time_hr) * 3600;
        temp_time[1] = "\0";
        char *temp_time_hr = &temp_time[0];
        secs += atoi(temp_time) * 60;
    }
    /*
    else if (temp_index == 4)
    {
        char *temp_time_min = &temp_time[2];
        char *temp_time_hr = &temp_time[0];
    }
    else
        return 1;
    */

    printf("%s\n", (char *)(temp_time_hr));
    printf("%s\n", (char *)(temp_time_min));
    printf("%d\n", secs);

    return 0;
}
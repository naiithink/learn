#include <stdio.h>
#include <stdlib.h>

#define STR_IN_SIZE 12
#define TEMP_SIZE 3

typedef struct
{
    int hh;
    int mm;
    int tt;
}
time;

int isnum(char c)
{
    if (c > 47 && c < 58)
        return 1;
    else
        return 0;
}

int main(void)
{
    char time12_str[STR_IN_SIZE], temp[3] = "\0\0";
    int added = 0;
    time time12, time24;

    time24.tt = -1;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    fgets(time12_str, STR_IN_SIZE, stdin);

    for (int i = 0, temp_index = 0, temp_obj_index = 0; time12_str[i] != '\0'; i++)
    {
        if (time12_str[i] == ':')
        {
            time12.hh = atoi(temp);
            added++;
        }
        else if (time12_str[i] == 32)
        {
            time12.mm = atoi(temp);
            added++;
        }
        else if (time12_str[i+1] == '\0')
        {
            if (temp[1] == 'm' || temp[1] == 'M')
            {
                switch (temp[0])
                {
                    case 'a':
                    case 'A':
                        time12.tt = 0;
                        break;
                    case 'p':
                    case 'P':
                        time12.tt = 1;
                        break;
                    default:
                        return 1;
                }
            }
            else
                return 1;
            added++;
        }
        else
        {
            temp[temp_index] = time12_str[i];
            temp_index++;
        }

        if (added)
        {
            char *temp = "\0\0";
            temp_index = 0;
            added--;
        }
    }

    if (time12.hh < 1       \
        || time12.hh > 12   \
        || time12.mm > 59   \
        || (time12.hh == 12 \
        && time12.mm > 0)   )
        return 1;

    time24 = time12;

    if (time12.tt && (time24.hh += 12) > 23)
            time24.hh = 12;
    else if (!time12.tt && time12.hh == 12)
            time24.hh = 0;

    printf("Equivalent 24-hour time: %02d:%02d\n", time24.hh, time24.mm);

    return 0;
}
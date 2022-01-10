#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE_T 10

int find_in_str(char *str)
{
    if (!str || str == NULL)
        return -1;

    for (int)
}

int str_len (char *str)
{
    int res = 0;

    if (!str || str == NULL)
        return -1;
    
    int i = 0;
    do
    {
        res++;
        i++;
    }
    while (str[i] != '\0' && str[i] != '\n');

    return res;
}

int to_24_time(char *time_12)
{
    int res = 0;



    return res;
}

int main(void)
{
    char time_12_str[STR_SIZE_T];
    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    fgets(time_12_str, STR_SIZE_T, stdin);

    printf("%d\n", str_len(time_12_str));

    return 0;
}
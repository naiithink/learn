#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s = 's', goal_str[10], saved_str[10];
    float goal = 0, remain = 0, saved = 0, topping_up = 0;
    int day = 0;

    printf("Enter your goal amount: ");
    fgets(goal_str, 10, stdin);
    goal = atof(goal_str);
    
    remain = goal;

    while (1)
    {
        day++;

        printf("Enter money collected today: ");
        fgets(saved_str, 10, stdin);
        saved = atof(saved_str);

        remain -= saved;
        topping_up += saved;
        
        if (remain <= 0)
        {
            if (day == 1)
                s = '\0';
            printf("Congratulations! You take %i day%c to reach your goal.\n", day, s);
            return 0;
        }
        printf("Total money collected up to day %i is %.2f. You need %.2f more.\n", day, topping_up, remain);
    }
}
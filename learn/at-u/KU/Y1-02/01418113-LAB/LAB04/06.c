#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char goal_str[10], saved_str[10];
    float goal, remain, saved;
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
        
        if (remain <= 0)
        {
            printf("Congratulations! You take %i days to reach your goal.\n", day);
            return 0;
        }
        printf("Total money collected up to day %i is %.2f. You need %.2f more.\n", day, saved, remain);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float price, cost, area, diameter;
    float extracost = 0.0;
    int size;
    int pepperoni;
    int cheese;
    int mushroom;
    int fixedcost = 5;
    int basecost = 2;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    scanf("%d", &size);
    if (size == 1)
    {
        diameter = 10.0;
    }
    else if (size == 2)
    {
        diameter = 16.0;
    }
    else
    {
        diameter = 20.0;
    }

    area = (M_PI * (diameter * diameter) / 4);

    printf("Extra pepperoni? (1=yes, 0=no): ");
    scanf("%d", &pepperoni);
    if (pepperoni == 1)
    {
        extracost += 0.5;
    }

    printf("Extra cheese? (1=yes, 0=no): ");
    scanf("%d", &cheese);
    if (cheese == 1)
    {
        extracost += 0.25;
    }

    printf("Extra mushroom? (1=yes, 0=no): ");
    scanf("%d", &mushroom);
    if (mushroom == 1)
    {
        extracost += 0.30;
    }

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    cost = fixedcost + (basecost * area) + (extracost * area);
    price = cost * 1.5;
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.\n");

    return 0;
}
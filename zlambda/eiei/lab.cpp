#include <iostream>
#include <stdio.h>

int main(void)
{
    char name[50], output[50];
    double sal, total = 0, num;

    std::cin >> name;
    std::cin >> sal;

    for (int i = 0; i < 12; i++)
    {
        std::cin >> num;
        total += num;
    }
    total = (total * 15) / 100 + sal * 12;

    sprintf(output, "%s %.2f\n", name, total);
    std::cout << output;
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define NUM_STR_SIZE 11
#define EXPO 2

int main(void)
{
    char number_str[NUM_STR_SIZE];
    int number = 0, prt = 0, digit_count = 0, res = 0, res_i = 0, is_automorphic = 0;

    fputs("Enter n = ", stdout);
    fgets(number_str, NUM_STR_SIZE, stdin);
    if ((number=atoi(number_str)) <= 0 || number > 100000000)
        return 1;
    res = number;
    prt = number;

    if (number <= 0)
        return 1;

    { /* LOCAL */
        int n = number;
        while (n)
        {
            n /= 10;
            digit_count++;
        }
    }

    int number_dig[digit_count], res_dig[digit_count];

    for (int i = 1; i < EXPO; i++)
    {
        res *= number;
    }

    res_i = res;

    for (int i = 0; i < digit_count; i++)
    {
        if ((number_dig[i] = number%10) != (res_dig[i]=res_i%10))
        {
            is_automorphic = 0;
            break;
        }
        number /= 10;
        res_i /= 10;
        is_automorphic = 1;
    }

    printf("n^2 = %i\n", res);
    if (is_automorphic)
        printf("Yes. %i is automorphic number.\n", prt);
    else
        printf("No. %i is not automorphic number.\n", prt);

    return 0;
}
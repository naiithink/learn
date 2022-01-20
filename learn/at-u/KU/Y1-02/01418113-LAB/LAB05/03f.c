#include <stdio.h>
#include <stdlib.h>

#define STR_SIZE 10

int main(void)
{
    char oper_s[STR_SIZE], oper, init_s[STR_SIZE], input_s[STR_SIZE];
    float init = 0.0, input = 0.0, res = 0.0, recent = 0.0;

    printf("Initial Value: ");
    fgets(init_s, STR_SIZE, stdin);
    printf("\n");
    init = atof(init_s);
    recent = init;

    while (1)
    {
        printf("Operator: ");
        fgets(oper_s, STR_SIZE, stdin);
        if (oper_s[1] != '\n')
            return 1;
        else
            oper = oper_s[0];
        if (oper != '@')
        {
            printf("Input Value: ");
            fgets(input_s, STR_SIZE, stdin);
            input = atof(input_s);
        }
        else
        {
            printf("\n");
            printf("Finish Calculation. Final Value is %.4f\n", recent);
            return 0;
        }
        switch (oper)
        {
            case '+':
                res = recent + input;
                break;
            case '-':
                res = recent - input;
                break;
            case '*':
                res = recent * input;
                break;
            case '/':
                if (input == 0.0)
                    return 1;
                res = recent / input;
                break;
            default:
                printf("Finish Calculation. Final Value is %.4f\n", recent);
                return 1;
        }
        recent = res;
        printf("Present Value is %.4f\n", recent);
        printf("\n");
    }

    return 1;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // scanf("%lf", &salary);
    char *salary_str;
    double salary, salary1, total;
    fgets(salary_str, sizeof(stdin)+2, stdin);
    salary = atof(salary_str);
    salary1 = salary;

    if (salary < 0)
    {
        printf("Error: Salary must be greater or equal to 0\n");
        return 1;
    }
    if (salary > 300000)
    {
        total = 300000 * 0.05;
        salary1 = salary - 300000;
    }
    if (salary)
    {
        total = total + salary1 * 0.1;
    }

    printf("%.2lf\n", total);
}
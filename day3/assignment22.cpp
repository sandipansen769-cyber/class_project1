#include <stdio.h>

int main()
{
    float basic, da, ta, salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter TA: ");
    scanf("%f", &ta);

    salary = basic + da + ta + 5000;

    printf("Annual Salary = %.2f", salary);

    return 0;
}

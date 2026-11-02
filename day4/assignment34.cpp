#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter annual income: ");
    scanf("%f", &income);

    if (income <= 250000)
        tax = 0;
    else if (income <= 500000)
        tax = income * 0.05;
    else if (income <= 1000000)
        tax = income * 0.10;
    else
        tax = income * 0.30;

    printf("Annual Income = Rs. %.2f\n", income);
    printf("Tax Amount = Rs. %.2f\n", tax);
    printf("Income After Tax = Rs. %.2f", income - tax);

    return 0;
}

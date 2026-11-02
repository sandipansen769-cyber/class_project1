#include <stdio.h>

int main()
{
    int days, years, months, remaining;

    printf("Enter age in days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining = days % 365;

    months = remaining / 30;
    remaining = remaining % 30;

    printf("Age = %d years, %d months and %d days",
           years, months, remaining);

    return 0;
}

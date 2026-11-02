#include <stdio.h>

int main()
{
    int unit;
    float bill;

    printf("Enter meter reading: ");
    scanf("%d", &unit);

    if (unit <= 100)
        bill = unit * 10;
    else if (unit <= 150)
        bill = unit * 15;
    else if (unit <= 200)
        bill = unit * 20;
    else
        bill = unit * 25;

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}

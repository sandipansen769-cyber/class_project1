#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    sum = (n / 100) + (n / 10) % 10 + n % 10;

    printf("Sum of digits = %d", sum);

    return 0;
}

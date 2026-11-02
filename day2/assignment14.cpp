#include <stdio.h>
#include <math.h>

int main()
{
    float n;

    printf("Enter a number: ");
    scanf("%f", &n);

    printf("Floor value = %.0f\n", floor(n));
    printf("Ceiling value = %.0f", ceil(n));

    return 0;
}

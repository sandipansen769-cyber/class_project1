#include <stdio.h>

int main()
{
    int n, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n - (n / 10) * 10;

    if (last < 0)
        last = -last;

    printf("Last digit = %d", last);

    return 0;
}

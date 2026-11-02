#include <stdio.h>

int main() {
    long long num, temp, rev = 0;
    int remainder;

    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = (num < 0) ? -num : num;

    if (temp == 0) {
        printf("Digits are: 0\n");
        return 0;
    }

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    printf("Digits from left to right: ");
    while (rev > 0) {
        remainder = rev % 10;
        printf("%d ", remainder);
        rev /= 10;
    }
    printf("\n");

    return 0;
}

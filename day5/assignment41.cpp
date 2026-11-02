#include <stdio.h>

int main() {
    long long num, temp;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;
    if (temp == 0) {
        count = 1;
    } else {
        for (; temp != 0; temp /= 10) {
            count++;
        }
    }

    printf("Number of digits in %lld = %d\n", num, count);

    return 0;
}

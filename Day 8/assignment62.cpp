#include <stdio.h>

int sumNatural(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Enter a positive natural number.");
    } else {
        printf("Sum = %d", sumNatural(n));
    }

    return 0;
}

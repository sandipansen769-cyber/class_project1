#include <stdio.h>

int sumNatural(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sumNatural(n - 1);
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

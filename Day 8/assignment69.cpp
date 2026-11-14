#include <stdio.h>

int main() {
    int a[10];
    int maxElement, minElement;

    printf("Enter 10 elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    maxElement = a[0];
    minElement = a[0];

    for (int i = 1; i < 10; i++) {
        if (a[i] > maxElement) {
            maxElement = a[i];
        }
        if (a[i] < minElement) {
            minElement = a[i];
        }
    }

    printf("Maximum element = %d\n", maxElement);
    printf("Minimum element = %d", minElement);

    return 0;
}

#include <stdio.h>

int hcf(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return (a / hcf(a, b)) * b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    printf("HCF = %d\n", hcf(a, b));
    printf("LCM = %d", lcm(a, b));

    return 0;
}

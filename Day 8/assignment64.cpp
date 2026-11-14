#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("The given sides do not form a triangle.");
        return 0;
    }

    if (a == b && b == c) {
        printf("Type: Equilateral triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Type: Isosceles triangle\n");
    } else {
        printf("Type: Scalene triangle\n");
    }

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area = %.2f", area);

    return 0;
}

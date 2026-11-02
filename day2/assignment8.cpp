#include <stdio.h>

int main()
{
    float s, b, h, l, w, r;
    float square, triangle, rectangle, circle;

    printf("Enter side of square: ");
    scanf("%f", &s);

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &b, &h);

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &l, &w);

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    square = s * s;
    triangle = 0.5 * b * h;
    rectangle = l * w;
    circle = 3.14159 * r * r;

    printf("\nArea of Square = %.2f", square);
    printf("\nArea of Triangle = %.2f", triangle);
    printf("\nArea of Rectangle = %.2f", rectangle);
    printf("\nArea of Circle = %.2f", circle);

    return 0;
}

#include <stdio.h>

int main()
{
    int r1, r2;
    float m1, m2, m3, m4, m5;
    float n1, n2, n3, n4, n5;
    float p1, p2;
    int result;

    printf("Enter roll number of first student: ");
    scanf("%d", &r1);

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    printf("Enter roll number of second student: ");
    scanf("%d", &r2);

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    p1 = (m1 + m2 + m3 + m4 + m5) / 5;
    p2 = (n1 + n2 + n3 + n4 + n5) / 5;

    result = (p1 > p2) ? r1 : r2;

    if (p1 == p2)
        printf("Both students have equal percentage.");
    else
        printf("Roll number of highest percentage student = %d", result);

    return 0;
}

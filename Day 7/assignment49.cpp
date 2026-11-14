#include <stdio.h>

int main()
{
    int day;

    do
    {
        printf("Enter day number (1-7): ");
        scanf("%d", &day);

        if (day < 1 || day > 7)
            printf("Invalid day! Try again.\n");

    } while (day < 1 || day > 7);

    switch (day)
    {
        case 1:
            printf("Monday");
            break;

        case 2:
            printf("Tuesday");
            break;

        case 3:
            printf("Wednesday");
            break;

        case 4:
            printf("Thursday");
            break;

        case 5:
            printf("Friday");
            break;

        case 6:
            printf("Saturday");
            break;

        case 7:
            printf("Sunday");
            break;
    }

    return 0;
}

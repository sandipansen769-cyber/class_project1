#include <stdio.h>

int main()
{
    int sec, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    if (sec >= 0)
    {
        hours = sec / 3600;
        minutes = (sec % 3600) / 60;
        seconds = sec % 60;

        printf("Hours = %d\n", hours);
        printf("Minutes = %d\n", minutes);
        printf("Seconds = %d\n", seconds);
    }
    else
    {
        printf("Invalid time");
    }

    return 0;
}

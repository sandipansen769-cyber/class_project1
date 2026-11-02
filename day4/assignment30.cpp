#include <stdio.h>

int main()
{
    int toss;

    printf("Enter 1 if Captain A wins the toss, otherwise 0: ");
    scanf("%d", &toss);

    if (toss == 1)
        printf("Captain A won the toss");
    else
        printf("Captain A did not win the toss");

    return 0;
}

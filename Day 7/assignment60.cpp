#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int top = 0, bottom = 2;
    int left = 0, right = 2;
    int num = 1;

    while (top <= bottom && left <= right)
    {
        for (j = left; j <= right; j++)
            a[top][j] = num++;

        top++;

        for (i = top; i <= bottom; i++)
            a[i][right] = num++;

        right--;

        for (j = right; j >= left; j--)
            a[bottom][j] = num++;

        bottom--;

        for (i = bottom; i >= top; i--)
            a[i][left] = num++;

        left++;
    }

    printf("Number Spiral:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%2d ", a[i][j]);

        printf("\n");
    }

    return 0;
}

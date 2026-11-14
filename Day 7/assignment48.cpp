#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    while (1)
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                printf("It is a Vowel.");
            else
                printf("It is a Consonant.");
        }
        else
        {
            printf("Invalid character.");
        }

        break;
    }

    return 0;
}

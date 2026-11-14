#include <stdio.h>

int main() {
    int roll[60], searchRoll;
    int found = 0;

    printf("Enter roll numbers of 60 students: ");
    for (int i = 0; i < 60; i++) {
        scanf("%d", &roll[i]);
    }

    printf("Enter the roll number to search: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < 60; i++) {
        if (roll[i] == searchRoll) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Roll number is present.");
    } else {
        printf("Roll number is not present.");
    }

    return 0;
}

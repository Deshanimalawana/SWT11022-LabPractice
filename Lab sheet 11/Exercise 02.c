#include <stdio.h>

int main() {
    int numbers[10];
    int searchNumber;
    int found = 0;

    printf("Enter 10 floating point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number : ");
        scanf("%d", &numbers[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &searchNumber);

    for (int i = 0; i < 10; i++) {
        if (numbers[i] == searchNumber) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The number %d is present in the array.\n", searchNumber);
    } else {
        printf("The number %d is NOT present in the array.\n", searchNumber);
    }

    return 0;
}

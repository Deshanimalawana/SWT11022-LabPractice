#include <stdio.h>

int main() {
    int number;

    printf("Enter numbers (Enter a negative number to stop) - \n");

    while (1) {
        printf("Enter a number -  ");
        scanf("%d", &number);

        if (number < 0) {

            break;
        }

        printf("You entered: %d\n", number);
    }

    printf("Program terminated as a negative number was entered.\n");

    return 0;
}

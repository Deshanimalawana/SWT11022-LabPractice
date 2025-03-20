#include <stdio.h>

int main() {
    int number;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0) {
            printf("Negative number detected! Exiting...\n");
            break;
        }
    }

    return 0;
}


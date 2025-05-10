#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (Enter a negative number to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        printf("user entered: %d\n", num);
    }

    printf("Negative number entered. Exiting program.\n");

    return 0;
}

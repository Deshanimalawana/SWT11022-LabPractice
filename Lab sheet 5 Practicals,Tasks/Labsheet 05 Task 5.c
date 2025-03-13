#include <stdio.h>

int main() {
    int n;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking if the number is positive, negative, or zero
    if (n > 0) {
        printf("The number is positive.\n");
    } else if (n < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

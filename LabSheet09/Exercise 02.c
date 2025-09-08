#include <stdio.h>

// Function declaration
void printStars(int n);

int main() {
    int num;
    printf("Enter number of stars to print: ");
    scanf("%d", &num);
    printStars(num); // Function call
    return 0;
}

// Function definition
void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n"); // Move to the next line after printing stars
}

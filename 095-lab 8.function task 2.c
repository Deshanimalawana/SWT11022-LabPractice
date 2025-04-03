#include <stdio.h>

// Function prototype
int fibonacci(int n);

int main() {
    int n, i;

    // Asking the user for the number of terms
    printf("Enter the number of terms to display in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);

    // Displaying the Fibonacci sequence
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: the 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1; // Base case: the 1st Fibonacci number is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

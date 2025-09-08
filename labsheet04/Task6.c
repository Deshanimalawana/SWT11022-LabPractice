#include <stdio.h>

// Function to print binary representation
void printBinary(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {
    int x = 5, y = 3; // Declare and initialize x and y

    // Perform bitwise operations
    int and_result = x & y;
    int or_result = x | y;
    int xor_result = x ^ y;

    // Display results
    printf("x = %d, y = %d\n", x, y);
    printf("Bitwise AND (x & y) = %d\n", and_result);
    printf("Bitwise OR (x | y) = %d\n", or_result);
    printf("Bitwise XOR (x ^ y) = %d\n", xor_result);

    // Display results in binary
    printf("\nx in binary: ");
    printBinary(x);
    printf("\ny in binary: ");
    printBinary(y);
    printf("\nAND result in binary: ");
    printBinary(and_result);
    printf("\nOR result in binary: ");
    printBinary(or_result);
    printf("\nXOR result in binary: ");
    printBinary(xor_result);
    printf("\n");

    // Demonstrate prefix and postfix increment and decrement
    printf("\nDemonstrating increment and decrement operators:\n");

    printf("Initial x: %d\n", x);
    printf("Prefix Increment (++x): %d\n", ++x);
    printf("Postfix Increment (x++): %d\n", x++);
    printf("Value after Postfix Increment: %d\n", x);

    printf("Prefix Decrement (--x): %d\n", --x);
    printf("Postfix Decrement (x--): %d\n", x--);
    printf("Value after Postfix Decrement: %d\n", x);

    return 0;
}

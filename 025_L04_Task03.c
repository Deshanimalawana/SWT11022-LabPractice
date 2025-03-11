#include <stdio.h>

int main() {
    // Declare two integers
    int x = 5, y = 3;

    // Perform bitwise operations
    printf("Bitwise AND (x & y): %d\n", x & y);
    printf("Bitwise OR (x | y): %d\n", x | y);
    printf("Bitwise XOR (x ^ y): %d\n", x ^ y);

    // Display results in binary format
    printf("Binary of x & y: %04b\n", x & y);
    printf("Binary of x | y: %04b\n", x | y);
    printf("Binary of x ^ y: %04b\n", x ^ y);

    // Demonstrate prefix and postfix increment and decrement
    printf("x before increment: %d\n", x);
    printf("Prefix increment (++x): %d\n", ++x);
    printf("Postfix increment (x++): %d\n", x++);
    printf("x after increment: %d\n", x);

    printf("y before decrement: %d\n", y);
    printf("Prefix decrement (--y): %d\n", --y);
    printf("Postfix decrement (y--): %d\n", y--);
    printf("y after decrement: %d\n", y);

    return 0;
}

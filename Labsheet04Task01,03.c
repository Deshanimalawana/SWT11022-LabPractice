#include <stdio.h>

int main() {
    // Declare two integer variables
    int x = 5; // Example value
    int y = 3; // Example value

    // Perform bitwise operations
    int and_result = x & y;
    int or_result = x | y;
    int xor_result = x ^ y;

    // Print the results
    printf("x = %d, y = %d\n", x, y);
    printf("Bitwise AND (x & y) = %d\n", and_result);
    printf("Bitwise OR  (x | y) = %d\n", or_result);
    printf("Bitwise XOR (x ^ y) = %d\n", xor_result);

    return 0;
}

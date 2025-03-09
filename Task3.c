#include <stdio.h>

int main() {
    // a. Declare two integer variables with any values
    int x = 5, y = 3;  // You can change these values

    // b. Perform bitwise operations
    int andResult = x & y;  // Bitwise AND
    int orResult = x | y;   // Bitwise OR
    int xorResult = x ^ y;  // Bitwise XOR

    // Display results
    printf("x = %d, y = %d\n", x, y);
    printf("Bitwise AND (x & y) = %d\n", andResult);
    printf("Bitwise OR (x | y) = %d\n", orResult);
    printf("Bitwise XOR (x ^ y) = %d\n", xorResult);

    return 0;
}

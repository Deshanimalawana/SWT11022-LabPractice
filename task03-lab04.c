#include <stdio.h>

int main() {
    int x = 12, y = 20;

    int and_result = x & y;
    int or_result = x | y;
    int xor_result = x ^ y;

    printf("Bitwise AND of %d and %d is: %d\n", x, y, and_result);
    printf("Bitwise OR of %d and %d is: %d\n", x, y, or_result);
    printf("Bitwise XOR of %d and %d is: %d\n", x, y, xor_result);

    return 0;
}

#include <stdio.h>

int main() {

    int x = 5;
    int y = 3;

    int and_result = x & y;
    int or_result = x | y;
    int xor_result = x ^ y;

    printf("x = %d, y = %d\n", x, y);
    printf("Bitwise AND (x & y): %d\n", and_result);
    printf("Bitwise OR (x | y): %d\n", or_result);
    printf("Bitwise XOR (x ^ y): %d\n", xor_result);

    return 0;
}

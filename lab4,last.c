#include <stdio.h>

int main() {
    int x = 12;
    int y = 10;

    int AND_result = x & y;
    int OR_result = x | y;
    int XOR_result = x ^ y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("Bitwise AND (x & y): %d\n", AND_result);
    printf("Bitwise OR (x | y): %d\n", OR_result);
    printf("Bitwise XOR (x ^ y): %d\n", XOR_result);

    return 0;
}

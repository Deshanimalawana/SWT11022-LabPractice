#include <stdio.h>

int main() {
    int x = 20;
    int y = 16;

    int and_operator = x & y;
    int or_operator = x | y;
    int xor_operator = x ^ y;

    printf("Bitwise AND: %d\n", and_operator);
    printf("Bitwise OR: %d\n", or_operator);
    printf("Bitwise XOR: %d\n", xor_operator);
    
    return 0;
}
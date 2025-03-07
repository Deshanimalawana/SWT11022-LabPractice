#include <stdio.h>

int main() {

    int x = 5;
    int y = 3;


    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;


    printf("x = %d (binary: ", x);
    for (int i = 25; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf(")\n");

    printf("y = %d (binary: ", y);
    for (int i = 25; i >= 0; i--) {
        printf("%d", (y >> i) & 1);
    }
    printf(")\n");

    printf("Bitwise AND (x & y): %d (binary: ", andResult);
    for (int i = 31; i >= 0; i--) {
        printf("%d", (andResult >> i) & 1);
    }
    printf(")\n");

    printf("Bitwise OR (x | y): %d (binary: ", orResult);
    for (int i = 31; i >= 0; i--) {
        printf("%d", (orResult >> i) & 1);
    }
    printf(")\n");

    printf("Bitwise XOR (x ^ y): %d (binary: ", xorResult);
    for (int i = 31; i >= 0; i--) {
        printf("%d", (xorResult >> i) & 1);
    }
    printf(")\n");


    printf("\nBefore increment/decrement:\n");
    printf("x = %d, y = %d\n", x, y);


    printf("\nPrefix increment on x: ++x = %d\n", ++x);
    printf("Prefix increment on y: ++y = %d\n", ++y);


    printf("\nPostfix increment on x: x++ = %d\n", x++);
    printf("Postfix increment on y: y++ = %d\n", y++);


    printf("\nAfter increments:\n");
    printf("x = %d, y = %d\n", x, y);


    printf("\nPrefix decrement on x: --x = %d\n", --x);
    printf("Prefix decrement on y: --y = %d\n", --y);


    printf("\nPostfix decrement on x: x-- = %d\n", x--);
    printf("Postfix decrement on y: y-- = %d\n", y--);


    printf("\nAfter decrements:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

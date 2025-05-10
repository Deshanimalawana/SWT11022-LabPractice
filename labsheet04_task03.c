#include <stdio.h>
void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 8 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}
int main() {
    int x = 5;
    int y = 3;

    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;

    printf("x = ");
    printBinary(x);
    printf("y = ");
    printBinary(y);

    printf("x & y = ");
    printBinary(andResult);

    printf("x | y = ");
    printBinary(orResult);

    printf("x ^ y = ");
    printBinary(xorResult);

    printf("\nPrefix and Postfix Increment and Decrement operations:\n");

    printf("Before increment and decrement operations:\n");
    printf("x = %d, y = %d\n", x, y);

    printf("Prefix increment of x: %d -> %d\n", x, ++x);
    printf("Prefix increment of y: %d -> %d\n", y, ++y);

    x = 5;
    y = 3;

    printf("Postfix increment of x: %d -> %d\n", x, x++);
    printf("Postfix increment of y: %d -> %d\n", y, y++);

    printf("After postfix operations:\n");
    printf("x = %d, y = %d\n", x, y);

    printf("Prefix decrement of x: %d -> %d\n", x, --x);
    printf("Prefix decrement of y: %d -> %d\n", y, --y);

    x = 5;
    y = 3;

    printf("Postfix decrement of x: %d -> %d\n", x, x--);
    printf("Postfix decrement of y: %d -> %d\n", y, y--);

    printf("After postfix decrement operations:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

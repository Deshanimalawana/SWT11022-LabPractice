#include <stdio.h>

void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {

    int x = 6;
    int y = 10;


    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;


    printf("x in binary: ");
    printBinary(x);
    printf("y in binary: ");
    printBinary(y);
    printf("x & y in binary: ");
    printBinary(andResult);
    printf("x | y in binary: ");
    printBinary(orResult);
    printf("x ^ y in binary: ");
    printBinary(xorResult);

    return 0;
}






#include <stdio.h>

int main(){

    int x = 12;
    int y = 6;

    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;
    int notResult = ~x;
    int leftShift = x << y;
    int rightShift = x >> y;

    printf("And Result: %d\n", andResult);
    printf("OR Result: %d\n", orResult);
    printf("XOR Result: %d\n", xorResult);
    printf("NOT Result: %d\n", notResult);
    printf("Left Shift Result: %d\n", leftShift);
    printf("Right Shift Result: %d\n", rightShift);


    return 0;


}

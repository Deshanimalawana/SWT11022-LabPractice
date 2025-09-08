#include<stdio.h>
int main(){

    int x = 12;
    int y = 6;

    int andResult = x & y;
    int orResult = x | y;
    int XorResult = x ^ y;
    int notResult = ~x;
    int leftShift = x << 2;
    int rightShift = y >> 1;

    printf("And Result: %d\n", andResult);
    printf("Or Result: %d\n", orResult);
    printf("Xor Result: %d\n", XorResult);
    printf("Not Result: %d\n", notResult);
    printf("Left shift Result: %d\n", leftShift);
    printf("Right shift Result: %d\n", rightShift);

    return 0;

}



#include<stdio.h>
int main()
{
    int x = 12; //1100
    int y = 6; //0110

    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;
    int notResult = ~x;
    int leftShift = x << 2;
    int rightShift = x >> 4;

    printf("Result of AND: %d\n", andResult);
    printf("Result of OR: %d\n", orResult);
    printf("Result of XOR: %d\n", xorResult);
    printf("Result of Not: %d\n", notResult);
    printf("Result of Left Shift: %d\n",leftShift);
    printf("Result of Right Shift: %d\n", rightShift);

    return 0;
}

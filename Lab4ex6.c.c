#include <stdio.h>


int main()
{
    int x = 12;
    int y = 6;

    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;
    int notResult = ~x;
    int leftshift = x<< 2 ;
    int rightshift = y >> 1;

    printf("AND Result: %d\n",andResult);
    printf("OR Result: %d\n", orResult);
    printf("XOR Result: %d\n", xorResult);
    printf("Not Result: %d\n", notResult);
    printf("Left Shift Result: %d\n", leftshift);
    printf("Right shift Result: %d\n", rightshift);
    return 0;
}

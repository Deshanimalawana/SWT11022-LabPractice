#include<stdio.h>
int main(){

    int x=12;
    int y=6;

    int andResult = x & y;
    int orResult= x | y;
    int XorResult= x ^ y;
    int notResult = ~x;
    int leftshift= x << 2;
    int rightshift = y >> 1;

    printf("AND result: %d\n", andResult);
    printf("OR result: %d\n", orResult);
    printf("XOR result: %d\n", XorResult);
    printf("AND result: %d\n", notResult);
    printf("Left shift result: %d\n",leftshift);
    printf("Right shift result: %d\n",rightshift);

    return 0;


}

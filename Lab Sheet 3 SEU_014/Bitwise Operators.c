#include <stdio.h>
int main (){

    int x = 12; //1100
    int y = 6;  //0110

    int andResult = x & y ;
    int orResult = x || y ;
    int xorResult = x ^ y ;
    int notResult = ~x;
    int leftShift = x << 2 ;
    int rightShift = y >> 1 ;

    printf("And Result : %d \n",andResult);
    printf("Or Result : %d \n",orResult);
    printf("Xor Result : %d \n",xorResult);
    printf("Not Result : %d \n",notResult);
    printf("Left Shift Result : %d \n",leftShift);
    printf("Right Shift Result : %d \n",rightShift);

    return 0;



}

#include <stdio.h>
int main(){

    int x,y;

    printf("-------- Enter Values --------\n \n");
    printf("Enter Value For X :");
    scanf("%d",&x);
    printf("Enter Value For Y :");
    scanf("%d",&y);


    //bitwise operator

    int andResult = x & y ;
    int orResult = x | y ;
    int xorResult = x ^ y ;

    printf("\n");
    printf("---- Bitwise Operator Results ----\n \n");
    printf("And Result : %d \n",andResult);
    printf("Or Result : %d \n",orResult);
    printf("Xor Result : %d \n",xorResult);
    printf("\n");

    //Prefix and Postfix Increment

    printf("---- Prefix and Postfix Increment ----\n \n");
    printf("Value of x Icremented:%d\n",++x);
    printf("",y--);
    printf("Value of y Decremented:%d\n",y);
    printf("\n");


    int after_P_PandResult = x & y ;
    int after_P_PorResult = x | y ;
    int after_P_PxorResult = x ^ y ;

    printf("---- After Prefix and Postfix Increment, Bitwise Operator Results ----\n \n");
    printf("And Result : %d \n",after_P_PandResult);
    printf("Or Result : %d \n",after_P_PorResult);
    printf("Xor Result : %d \n",after_P_PxorResult);

    return 0;



}

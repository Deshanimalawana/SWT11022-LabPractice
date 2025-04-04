#include <stdio.h>

int main ()
{
    int x = 8 , y = 11;

    int andValue = x & y;
    int orValue = x | y;
    int xorValue = x ^ y;


    printf("The Bitwise AND value is :- %d\n",andValue);
    printf("The Bitwise OR value is :- %d\n",orValue);
    printf("The Bitwise XOR value is :- %d\n\n",xorValue);

    return 0;

}

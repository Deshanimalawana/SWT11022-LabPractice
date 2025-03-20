#include<stdio.h>

int main()
{
    int a=4, b=8;
    
    int and= a&b;
    int or= a|b;
    int xor= a^b;
    
    printf("Bitwise AND (a&b)=  %d\n", and);
    printf("Bitwise OR  (a|b)= %d\n", or);
    printf("Bitwise XOR (a^b)= %d\n", xor);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x= 12;//1100
    int y=6;//0110

    int Andresults=x&y;
    int Orresults=x|y;
    int Xorresults=x^y;
    int notresults=~x;
    int leftresults=x<<2;
    int rightresults=y>>1;

    printf("And Result: %d\n",Andresults);
    printf("Or Result: %d\n",Orresults);
    printf("XOR Result: %d\n",Xorresults);
    printf("NOT Result: %d\n",notresults);
    printf("Left shift Result: %d\n",leftresults);
    printf("Right shift Result: %d\n",rightresults);

    return 0;
}

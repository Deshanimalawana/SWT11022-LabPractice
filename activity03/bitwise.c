#include<stdio.h>
int main() {

    int x =12;
    int y =6;

    int andresult = x&y;
    int orresult = x|y;
    int xorresult = x^y;
    int notresult = ~x;
    int leftshift = x<<2;
    int rightshift = y>>1;

    printf("AND Result: %d\n",andresult);
    printf("OR Result: %d\n",orresult);
    printf("XOR Result: %d\n",xorresult);
    printf("NOT Result: %d\n",notresult);
    printf("Left shift Result: %d\n",leftshift);
    printf("Right shift Result: %d\n",rightshift);

    return 0;


}

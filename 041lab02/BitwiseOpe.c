#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 12;
    int y = 6;

    int andresult= x&y;
    int orresult=x|y;
    int xorresult = x ^y;
    int notresult = ~x;
    int leftshift = x<<2;
    int rightshift = y>>1;

    printf("AND result: %d\n",andresult);
    printf("Or result: %d\n",orresult);
    printf("Xor result: %d\n",xorresult);
    printf("Not result: %d\n",notresult);
    printf("leftshift result: %d\n",leftshift);
    printf("rightshift result: %d\n",rightshift);

    return 0;
}

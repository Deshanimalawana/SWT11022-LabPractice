#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 12; //1100
    int y = 6; //0110

    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;
    int notResult = ~x;
    int leftshift = x << 2;
    int rightshift = y >> 1;

    printf("AND Result : %d\n",andResult);
    printf("OR result : %d\n",orResult);
    printf("NOT Result : %d\n",notResult);
    printf("Left shift Result : %d\n",leftshift);
    printf("Right shift Result : %d\n",rightshift);

    return 0;
}

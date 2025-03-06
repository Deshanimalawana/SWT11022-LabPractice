#include <stdio.h>
    int main(){
        int x = 12;
        int y = 6;

        int andResult = x & y;
        int orResult = x | y;
        int xorResult = x ^ y;
        int notResult = ~x;
        int leftshift =x << 2;
        int rightshift =y >> 2;

        printf("And result: %d\n",andResult);
        printf("or result: %d\n",orResult);
        printf("xor result: %d\n",xorResult);
        printf("not result: %d\n",notResult);
        printf("Leftshift : %d\n",leftshift);
        printf("Rightshift : %d\n",rightshift);

        return 0;

    }

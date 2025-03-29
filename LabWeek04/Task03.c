#include <stdio.h>


int main() {

    int x = 10, y = 22;


    int andResult = x & y;
    int orResult = x | y;
    int xorResult = x ^ y;

    printf("x= %d\ny= %d\n",x,y);
    printf("Bitwise AND (x&y): %d\n",andResult);
    printf("Bitwise OR (x|y): %d\n",orResult);
    printf("Bitwise XOR (x^y): %d\n",xorResult);

    return 0;
}

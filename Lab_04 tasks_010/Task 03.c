#include <stdio.h>


int main(){
int x = 4;
int y = 6;

int andResult = x & y;
int orResult = x | y;
int xorResult = x ^ y;

printf("x=%d , y=%d\n",x,y);
printf("bitwise and result: %d\n", andResult);
printf("bitwise or result: %d\n", orResult);
printf("bitwise xor result: %d\n", xorResult);

           return 0;
}

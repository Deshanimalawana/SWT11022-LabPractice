#include <stdio.h>

int main () {
   int X = 12; //1100
   int Y = 6; //0110

   int andResult = X & Y;
   int orResult = X | Y;
   int xorResult = X ^ Y;
   int notResult = ~X;
   int leftShift = X << 2;
   int rightShift = Y >> 1;

   printf("AND Result: %d\n",andResult);
   printf("OR Result: %d\n",orResult);
   printf("XOR Result: %d\n",xorResult);
   printf("NOT Result: %d\n",notResult);
   printf("Left shift Result: %d\n",leftShift);
   printf("Right shift Result: %d\n",rightShift);

   return 0;
}

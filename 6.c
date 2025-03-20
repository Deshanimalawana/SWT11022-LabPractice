#include <stdio.h>

int main() {

   int x=12;
   int y=6;

   int andResult = x&y;
   int orResult = x|y;
   int xorresult = x^y;
   int notresult = ~x;
   int leftshift = x<<2;
   int rightshift = y>>1;


   printf("AND Result: %d\n",andResult);
   printf("OR Result: %d\n",orResult);
   printf("XOR Result: %d\n", xorresult);
   printf("NOT Result: %d\n",notresult);
   printf("LEFT Shift Result: %d\n",leftshift);
   printf("RIGHT Shift Result: %d\n",rightshift);

   return 0;
}

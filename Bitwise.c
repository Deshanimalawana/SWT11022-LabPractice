#include <stdio.h>
int main() {

   int X=12; //1100
   int Y=6; //0110

   int andresult= X & Y;
   int orresult= X|Y;
   int xorresult= X^Y;
   int notresult= ~X;
   int leftshift= X<<2;
   int rightshift= Y>>1;

   printf("ANDResult is:%d\n""Result is:%d\n""XORResult is:%d\n""NOTResult is:%d\n""LeftshiftResult is:%d\n""RightshiftResult is:%d\n",andresult,orresult,
          xorresult,notresult,leftshift,rightshift);


   return 0;



}

#include <stdio.h>

int x = 5;
int y = 3;

 void printBinary(int num) {
  for(int i=7; i>=0; i--) {printf("%d",(num >> i)&1);}
  printf("\n");
 }


int main() {

   int andResult = x&y;
   int orResult = x|y;
   int xorResult = x^y;


   printf("AND Result :");
   printBinary(andResult);
   printf("OR Result :");
   printBinary(orResult);
   printf("XOR Result : ");
   printBinary(xorResult);
   return 0;
}

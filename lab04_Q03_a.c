#include <stdio.h>
int main(){
 int x=8;
 int y=12;

 int AND_result = x & y ;
 int OR_result = x | y ;
 int XOR_result = x ^ y ;

  printf("Bitwise AND (x&y) : %d\n",AND_result);
  printf("Bitwise OR (x|y) : %d\n",OR_result);
  printf("Bitwise XOR (x^y) : %d\n",XOR_result);

 return 0;
 }

#include <stdio.h>
int main(){
 int x=6;
 int y=18;

 int AND = x & y ;
 int OR = x | y ;
 int XOR = x ^ y ;

  printf("AND (x&y) : %d\n",AND);
  printf("OR (x|y) : %d\n",OR);
  printf("XOR (x^y) : %d\n",XOR);

 return 0;
 }

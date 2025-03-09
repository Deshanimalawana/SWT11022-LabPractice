#include <stdio.h>
int main(){
 int x;
 int y;

 x=9;
 y=14;

 int AND = x & y ;
 int OR = x | y ;
 int XOR = x ^ y ;

  printf(" AND (x&y) : %d\n",AND);
  printf(" OR (x|y) : %d\n",OR);
  printf(" XOR (x^y) : %d\n",XOR);

 return 0;
 }

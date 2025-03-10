#include <stdio.h>
int main() {
 int x = 5;
 int y = 15;

 int AND = x & y ;
 int OR = x | y ;
 int XOR = x ^ y ;
  printf("Bitwise AND operation : %d\n",AND);
  printf("Bitwise OR operation : %d\n",OR);
  printf("Bitwise XOR operation : %d\n",XOR);

return 0;
}

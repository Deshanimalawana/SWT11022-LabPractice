#include <stdio.h>
 int main(){
  int a=5,b=10,c=15;
  int largest = (a >= b && a >= c) ? a : (b >= c ? b : c);



  printf("The largest number is %d\n",largest);

return 0;
 }





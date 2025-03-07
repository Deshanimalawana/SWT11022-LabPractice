#include <stdio.h>
int main() {
    int x = 5;
    int y = 3;

  //pre increment//
   printf("value of x : %d\n",x);
   printf("value of x : %d\n",++x);
   printf("Increment value of x : %d\n",x);
  //post increment//
   printf("value of y : %d\n",y);
   printf("value of y : %d\n",y++);
   printf("Decrement value of y : %d\n",y);

   //pre decrement//
   printf("value of x : %d\n",x);
   printf("value of x : %d\n",--x);
   printf("Decrement value of x : %d\n",x);
   //post decrement//
   printf("value of y : %d\n",y);
   printf("value of y : %d\n",y--);
   printf("Decrement value of y : %d\n",y);

   return 0;
}

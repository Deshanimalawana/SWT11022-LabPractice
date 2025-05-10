#include <stdio.h>
int squre (int num) {
    return num*num;
}

int main () {
   int number = 5;
   int result = squre(number);
   printf("The squre of %d is %d\n ",number,result);
   return 0;
}

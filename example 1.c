#include <stdio.h>
int squar(int num) {
      return num *num;
}

int main(){
       int number = 5;
       int result = squar(number);
       printf("the squar of %d is %d\n",number,result);
       return 0;
}

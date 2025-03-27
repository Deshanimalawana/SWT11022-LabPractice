#include<stdio.h>
int factorial(int n){
  if (n<=1){
    return 1;
  }
  else {
    return n*factorial(n-1);
  }
}
  int main(){
    int num =5;
    int fact=factorial(num);
    printf("%d! = %d\n",num,fact);
    return 0;
  }


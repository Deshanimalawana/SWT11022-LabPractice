#include<stdio.h>

int fibonacci(int n);

int main(){
 int n;

 printf("Enter the number:");
 scanf("%d",&n);

 printf("Sequence up to %d th term:\n",n);
 for(int i=0; i<n; i++){
    printf("%d",fibonacci(i));
 }
 return 0;
}
int fibonacci(int n){
  if(n<=1){
    return n;
  }
  return fibonacci(n-1)+fibonacci(n-2);
}

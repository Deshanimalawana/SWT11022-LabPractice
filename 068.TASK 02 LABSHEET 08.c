#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if(n<=1){
        return n;
    }
        return fibonacci(n-1)+fibonacci(n-2);
}
int main() {

   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("The Fibonacci Sequence is :",n);

   for(int i= 0; i < n; i++){
        printf("%d",fibonacci(i));
   }
    return 0;
}

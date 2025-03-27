#include<stdio.h>

 int fibonacci(int n);
 int main(){
     int terms;
     printf("Enter a number of terms:");
     scanf("%d",&terms);

     printf("Fibonacci sequence up to %d terms:\n",terms);
     for (int i = 0; i < terms; i++){
        printf("%d",fibonacci(i));
     }
     printf("\n");

     return 0;
 }

 int fibonacci(int n){
     if(n<=1){
        return n;
     }
     return fibonacci(n-1)+ fibonacci(n-2);
}




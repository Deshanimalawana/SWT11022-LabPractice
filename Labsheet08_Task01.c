#include <stdio.h>
 #include <stdlib.h>
 int isprime(int num){
      if(num<=1){
         return 0 ;
      }
      for (int i=2; i * i<=num; i++){
         if(num%i==0){
             return 0;
         }
     }

     return 1;

 }
 int main()
 {
     int primenum;
     printf("Enter the Number:");
     scanf("%d", &primenum);

     if (isprime(primenum)){
         printf(" %d is a prime number",primenum);
     } else{
         printf("%d is not a prime number",primenum);
     }
     return 0;
 }

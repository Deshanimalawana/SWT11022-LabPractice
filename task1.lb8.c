#include <stdio.h>
 int isprime(int num ){
      if (num <2)
        return 0 ;
      for (int i =2; i*i<=num;i++){
        if (num % i==0) return 0;

      }
return 1;

 }
 int main (){
 int number;
 printf("enter the number");
 scanf ("%d",&number);
    if (isprime(number)){
        printf ("%d is a prime number.\n ",number);
    }else {
    printf ("%d is not a prime number.\n",number);}
     return 0;
 }

#include<stdio.h>
int main () {

   int number=9;
   printf("Enter a number:",number);
   scanf("%d", &number);


   if (number%2==1){
   printf("The number is odd.");
   }
   else {
    printf("The number is even.");
   }



}

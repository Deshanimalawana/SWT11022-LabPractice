#include<stdio.h>
int main( ){
    int negative;

   do {
     printf("Enter a negative  number: ");
     scanf("%d",&negative);
   } while (negative >=0);
   printf("You entered negative number: %d",negative);
   return 0;
}

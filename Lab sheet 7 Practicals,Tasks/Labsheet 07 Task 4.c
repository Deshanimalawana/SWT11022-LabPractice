#include <stdio.h>

 int main() {
     int n;

     while(1){
         printf("Enter a number: ");
         scanf("%d", &n);

         if (n < 0) {
             break;
         }
     }

     printf("You Entered a negative number\n");

     return 0;
 }

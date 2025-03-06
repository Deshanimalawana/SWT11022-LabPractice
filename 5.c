#include <stdio.h>

int main() {
    int number;
   printf("Enter your number: ");
   scanf("%d", &number);

   (number %2==0) ? printf("Even number") : printf("Odd Number");

   return 0;

}

#include <stdio.h>

int main() {
   int a=12,b=8,c=15;

   int largest=(a>b)?((a>c)? a:c): ((b>c)? b:c);
   printf("the largest number is: %d\n",largest);

   float average=(a+b+c/3);
   printf("The average is: %.2f",average);







}

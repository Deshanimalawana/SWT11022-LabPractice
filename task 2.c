#include <stdio.h>
int main() {

   float Payrate;
   int hours;
   printf("Enter total worked hours: ");
   scanf("%d", &hours);
   printf("Enter Pay rate: ");
   scanf("%f", &Payrate);
   printf("Your Pay rate: %.2f, worked hours: %d\n", Payrate, hours);
   return 0;

}



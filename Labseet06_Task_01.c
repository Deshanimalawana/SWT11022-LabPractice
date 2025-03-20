#include <stdio.h>
int main(){
   float units;
   float bill;

   printf ("Enter a Units:");
   scanf ("%f",&units);

   if (units <= 50){
        bill = units * 0.50;
         printf ("Toatl bill amount is:%.2f",bill);

   }else if (units <= 150){
        bill = (50*0.50) + ((units - 50)*0.75);
         printf ("Toatl bill amount is:%.2f",bill);

   }else if (units <= 250){
        bill = (50*0.50)+(100*0.75)+((units -150)*1.20);
         printf ("Toatl bill amount is:%.2f",bill);

   }else{
        bill = (50*0.50)+(100*0.75)+(150*1.20)+((units - 250)*1.50);
         printf ("Toatl bill amount is:%.2f",bill);

   }

   return 0;
}

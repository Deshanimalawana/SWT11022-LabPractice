#include <stdio.h>
int main(){
   int units;
   float bills = 0;

   printf("Enter the units :");
   scanf("%d",&units);
     if (units <=50){
        bills = units*0.50;
     } else if (units <=150){
        bills = (50 * 0.50) + ((units-50)*0.75);
     } else if (units <= 250){
        bills = (50 * 0.50) + (100 * 0.75) + ((units - 150)*1.20);
     } else {
        bills = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250)*1.50);
     }
       printf("Total Electricity Bill : Rs. %2f\n",bills);

       return 0;
}

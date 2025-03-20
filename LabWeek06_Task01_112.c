#include <stdio.h>
int main (){
   int unit;

   float bill;
   float first = 0.5;
   float second =0.75;
   float third = 1.20;
   float above = 1.50;

   printf("Enter Number of units:");
   scanf("%d",&unit);

   if (unit<=50){
    bill= first * unit;
     printf("Your Bill is:%f",bill);
   }
    else if (unit<=150){
    bill= (first* 50)+(unit - 50)*second;
     printf("Your Bill is:%f",bill);
   }
   else if (unit<=250){
    bill=(first *50)+(second *100)+ (unit-150)*third;
     printf("Your Bill is:%f",bill);
   }
   else {
    bill=(first *50)+(second *100)+(third*100)+(unit-250)*above;
     printf("Your Bill is:%f",bill);
   }
   return 0;
}

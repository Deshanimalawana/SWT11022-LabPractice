#include<stdio.h>
int main () {
   int unit;
   float rate;
   printf("Enter Units:",unit);
   scanf("%d",&unit);
   if (unit<=50){
    rate= unit*0.50;
   }
    else if (unit<=150){
        rate= 50*0.50 + (unit-50)*0.75;
    }
        else if (unit<=250){
            rate= 50*0.50 + 100*0.75 + (unit-150)*1.20;
        }

    else if (unit>250){
        rate= 50*0.50+ 100*0.75 + 100*1.20 +(unit-250)*1.50;
}
printf("rate: %.2f",rate);
return 0;
}

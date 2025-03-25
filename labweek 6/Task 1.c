#include<stdio.h>
int main () {
   int unit;
   printf("enter your units :");
   scanf("%d",&unit);
   float rate;

   if (unit<=50){
        rate = unit*0.5;}
   else if(unit<=150){
        rate = (50*0.5)+((unit - 50)*0.75);}
   else if (unit<=250){
        rate = (50*0.5)+(100*0.75)+((unit - 150)*1.20);}
   else{
        rate = (50*0.5)+(100*0.75)+(100*1.20)+ ((unit - 250)*1.50);
   }
printf("your month Bill is: %.f\n",rate);
return 0;
}

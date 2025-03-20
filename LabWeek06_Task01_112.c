#include <stdio.h>
int main (){

   int unit;
   float rate;

   printf("enter number of units:");
   scanf("%d",&unit);

   if (unit<=50){
    rate=unit *0.50;
     printf("%f",rate);
   }
    else if (unit<=100){
    rate=unit *0.75;
     printf("%f",rate);
   }
   else if (unit<=200){
    rate=unit * 1.20;
     printf("%f",rate);
   }
   else if (unit<=250){
    rate=unit *1.50;
     printf("%f",rate);
   }
   return 0;
}

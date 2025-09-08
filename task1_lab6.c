#include<stdio.h>
int main(){
int unit;
printf("enter your unit:");
scanf("%d",&unit);
float rate;
float electricityBill;
  if(unit<=50){
    electricityBill=unit*0.50;
        printf("your electricitybill is   Rs%.2f\n",electricityBill);
  }else if (unit<=150){
    electricityBill = unit*0.75;
        printf("Your Electricitybill is   Rs%.2f\n",electricityBill);
  }else if(unit<=250){
    electricityBill = unit*1.20;
        printf("Your Electricitybill is   Rs%.2f\n",electricityBill);
  }else{
     electricityBill = unit*1.50;
        printf("Your Electricitybill is   Rs%.2f\n",electricityBill);
  }


return 0;
}

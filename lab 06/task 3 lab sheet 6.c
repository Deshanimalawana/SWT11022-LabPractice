#include<stdio.h>
int main(){
    int unit;
    float bill;
     printf("enter your electricity bill unit");
     scanf("%d",&unit);

    if(unit <= 50){
      bill = (unit*0.50);
      printf(" Total Electricity bill.%f",bill);

    }else if (unit <= 150){
      bill= (50*0.50)+((unit-50)*0.75);
      printf(" Total Electricity bill.%f",bill);

    }else if (unit <= 250){
      bill= (50*0.50)+(100*0.75)+((unit-150)*1.20);
      printf(" Total Electricity bill.%f",bill);

    }else{
      bill= (50*0.50)+(100*0.75)+(50*1.20)+((unit-250)*1.50);
      printf(" Total Electricity bill.%f",bill);
    }

    return 0;
}

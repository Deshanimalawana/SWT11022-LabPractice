#include <stdio.h>
int main(){

    int units;
    float rate;

    printf("Enter your units:");
    scanf("%d",&units);

    if(units<=50){
        rate=units * 0.50;
    }else if(units<=150){
        rate=50*0.50+(units-50)* 0.75;
    }else if(units<=250){
        rate=50*0.50 + 100*0.75 + (units-150) * 1.20;
    }else if(units>250){
        rate=50*0.50 + 100*0.75 + 100*1.20 + (units-250) * 1.50;
    }

    printf("Your Electricity Rate is :%.2f",rate);
   return 0;

}

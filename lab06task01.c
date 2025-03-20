#include<stdio.h>
int main(){
int unit;
float rate;
printf("enter your unit:");
scanf("%d",&unit);
if (unit<=50){
    float rate1=unit*0.50;
    printf("rate is :%.2f\n",rate1);
} else if (unit<=150){
    float rate2=50*0.5+((unit-50)*0.75);
    printf("rate is :%.2f\n",rate2);
} else if (unit<=250){
    float rate3=50*0.5+100*0.75+((unit-150)*1.20);
    printf("rate is :%.2f\n",rate3);
} else {
    float rate4=50*0.5+100*0.75+100*1.20+((unit-250)*1.50);
    printf("rate is :%.2f\n",rate4);
}
return 0;
}

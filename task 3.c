#include<stdio.h>
#include<stdlib.h>
int main(){

float price=5.99;
int quantity=3;
float total=price*quantity;
printf("total price:%.2f\n",total);


float payrate,hours;
printf("enter total worked hours:");
scanf("%d",&hours);

printf("enter pay rate:");
scanf("%f",&payrate);
printf("your pay rate:%.2f,worked hours:%d\n",payrate,hours);
}


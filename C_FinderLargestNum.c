#include <stdio.h>
int main(){

 //Declaring three int variables
 int num1;
 int num2;
 int num3;

 printf("Enter Wholse Num1:");
 scanf("%d",&num1);

 printf("Enter Wholse Num2:");
 scanf("%d",&num2);

 printf("Enter Wholse Num3:");
 scanf("%d",&num3);

 if(num1<num2){
    printf("largest number:%d\n",num2);
    if(num2<num3){
    printf("largest number: %d",num3);
    }else{
        printf("largest number: %d",num2);}
 }
 else {
    printf("largest number: %d",num1);}
 return 0;
 }










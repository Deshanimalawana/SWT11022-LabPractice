#include<stdio.h>
int main(){
  int age;
  float income;

  printf("Enter age:");
  scanf("%d",&age);

  printf("Enter annual income:");
  scanf("%f",&income);

  if(age>=60){
    if(income<60000){
        printf("Eligible for tax deduction.\n");
    }else{
        printf("Not eligible for tax deduction.\n");
        }
   }else{
    printf("Not eligible for tax deduction.\n");
   }
   return 0;
  }


#include<stdio.h>
int main (){
  int age=50;
  int income=60000;

  if (age >= 60 && income < 60000){
    printf("Eligible for tax deduction\n");

  }else if (age >= 60 && income >= 60000){
    printf("Not eligible for tax deduction\n");
  }else{
    printf("not eligible for tax deduction\n");
  }

  return 0;

}

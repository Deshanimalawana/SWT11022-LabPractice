#include<stdio.h>
  int main(){
    int age = 60;
    float income = 50000.0;

    if (age >= 60){
        if(income<60000.0){
            printf("Eligible for a tax deduction.\n");
        }else{
            printf("Not eligible for a tax deduction.\n");
        }
    }else if(age<60){
      printf("Not eligible for a tax deduction.\n");
    }

    return 0;
  }



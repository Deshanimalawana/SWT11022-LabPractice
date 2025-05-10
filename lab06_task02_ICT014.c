#include<stdio.h>
    int main(){
        int age;
        printf("enter you age :");
        scanf("%d",&age);
        float income;
        printf("enter your income : ");
        scanf("%d",&income);


        if (age>=60){
            if (income<60000.0){
                printf("you are eligible to deduction\n");
            }
            else {
                printf("you are not eligible to tax deduction\n");
            }
        }

        else{
            printf("you are not eligible to tax deduction\n");
        }
  return 0;
    }

#include <stdio.h>
int main (){

    int age;
    float income;

    printf("Enter Your age : ");
    scanf("%d",&age);
    printf("Enter your income : ");
    scanf("%f",&income);
    if (age >= 60){
        if (income < 60000.00){
            printf("YOu are eligible for a tax deduction.\n");
        }else{
            printf("YOu are not eligible for a tax deduction.\n");
        }
    }else{
        printf("YOu are not eligible for a tax deduction.\n");
    }

    return 0;

}

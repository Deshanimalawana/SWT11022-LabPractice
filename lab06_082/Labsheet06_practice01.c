#include <stdio.h>

int main( ){
    int age;
    float income;

    printf("Enter Age:");
    scanf("%d",&age);

    printf("Enter income:");
    scanf("%f",&income);

    if(age>=60){
        if (income<60000.00){
            printf("you are eligible for a tax deduction.\n");
        }else {
            printf("you are not eligible for a tax deduction.\n");
        }

    }else{
        printf("you are not eligible for a tax deduction.\n");
    }

        return 0;



}

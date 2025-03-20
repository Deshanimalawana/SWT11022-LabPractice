#include <stdio.h>

int main(){
    int age;
    float income;
    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enter the income:");
    scanf("%f",&income);

    if(age>=60){
        if(income>60000.0){
            printf("Eligible For Tax Deduction");
        }else{
            printf("Not Eligible for tax deduction");
        }
    }else{
        printf("Not Eligible for tax deduction");
        }
        return 0;


}

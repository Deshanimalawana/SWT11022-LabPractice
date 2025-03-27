#include<stdio.h>
int main(){
    int age;
    float income;

    printf("Age:");
    scanf("%d",&age);

    printf("Income:");
    scanf("%f",&income);

    if(age>=60){
        if(income<60000){
            printf("Eligible for tax deduction\n");
        }
        else{
            printf("Not eligible for tax deduction\n");
        }
    }
    else{
        printf("Not Eligible for tax deduction\n");
    }
}

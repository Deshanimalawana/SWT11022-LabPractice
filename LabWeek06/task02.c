#include <stdio.h>
int main(){
    int age,income;
    printf("Enter your Age:-");
    scanf("%d",&age);
    printf("Enter your income:-");
    scanf("%d",&income);

    if (age>=60 & income<60000){
        printf("Eligible for tax deduction");
    }
    else if(age>=60 & income>=60000){
        printf("Not eligible for tax deduction");
    }
    else{
        printf("Not Eligible for tax deduction");
    }
}

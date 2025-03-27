#include <stdio.h>
int main (){

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    float income;
    printf("Enter your income: ");
    scanf("%d",&income);

     if (age>=60 & income<60000.0){
        printf("Eligible for tax deduction\n");

     }else if (age>=60 & income>=60000.0){
        printf("Not eligible for tax deduction\n");
     }
    else {
        printf("Not eligible for tax deduction\n");
     }
    return 0;
}

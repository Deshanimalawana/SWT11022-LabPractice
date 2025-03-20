#include<stdio.h>
int main(){

    int age=62;
    float income=50000.00;

    printf("Enter Age:");
    scanf("%d",&age);

    printf("Enter income:");
    scanf("%f",&income);


    if (age>=60){
       if (income<60000.00){
            printf("eligible for tax deduction\n");
       } else {
            printf("not eligible for tax deduction\n");
       }

    }else{
            printf("not eligible for tax deduction");
        }

    return 0;
}





























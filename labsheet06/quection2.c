#include<stdio.h>
int main(){
int age ;
float income;

printf("your age:");
scanf("%d", &age);

printf("your income:");
scanf("%f", &income);

if(age>=60){
    printf("Eligible for tax deduction.\n");
    if(income>=50000){
        printf("Not eligible for tax deduction.\n");
    }
}
else{
    printf("Not eligible for tax deduction.\n");
}
return 0;





}

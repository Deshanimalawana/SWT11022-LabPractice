#include<stdio.h>
int main (){

int age= 21;
int income=45000;

if(age>=60)
    if(income<60000)
    printf("Eligible for tax deduction");

    else
        printf("Not Eligible for tax deduction");
else
    printf("Not Eligible for tax deduction");

    return 0;


}

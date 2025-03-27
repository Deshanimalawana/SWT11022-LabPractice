#include<stdio.h>
int main(){
    int age = 75;
    int income = 50000;
    if (age>=60)
    {
        if(income<60000)
        {
            printf("Eligible for tax deduction");
        }
        else
        {
            printf("Not Eligible for tax deduction");
        }
    }
    else
    {
        printf("Not Eligible for tax deduction");
    }
return 0;
}

#include <stdio.h>
int main()
{
    int age=70;
    float income=55000.0;

    if(age>=60){
        if(income<60000){
            printf("Eligible for tax deduction.\n");
        }
        else {
            printf("Not eligible for tax deduction.\n");
        }

    }
    else {
        if(age<60){
            printf("Not eligible for tax deduction.\n");
        }
    }
    return 0;



}

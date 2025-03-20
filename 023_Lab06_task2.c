#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age=22;
    int income=57000;
    if(age>=60 && income<60000){
        printf("eligible for tax deduction\n");
    }
    if (age>=60 && income>=60000){
        printf("Not eligible for tax deduction\n");
    }
    if (age<60){
        printf("Not eligible for tax deduction\n");
    }
    return 0;
}

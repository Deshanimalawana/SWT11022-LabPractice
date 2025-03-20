#include <stdio.h>
    int main(){
    int age=61, income=10000;
    if(age>=60){
        if(income<60000){
            printf("Eligible for tax deduction");
        }else{
            printf("Not eligible for tax deduction");
             }
    }else{
        printf("Not eligible for tax deduction");
    }
    return 0;
}

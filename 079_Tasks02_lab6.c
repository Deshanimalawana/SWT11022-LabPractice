#include <stdio.h>
int main(){
    int age=65;
    float income =50000;
    if (age>= 60){
        if (income < 60000.0){
            printf("You are eligible for a tax deduction.\n");
        }else{printf("You are not eligible for a tax deduction");
        }
    }else if(age<60){
    printf("You are not eligible for tax deduction");
    }
    return 0;

}

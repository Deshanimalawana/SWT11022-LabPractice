#include <stdio.h>
int main(){
    int age = 55;
    float income = 50000;

    if(age>=60){
        if (income < 6000.0){
            printf("You are eligible for a tax deduction.\n");
            } else {
                printf("You are not eligible for a tax deduction.\n");
            }
    }else {
         printf("You are not eligible for a tax deduction.\n");
    }
     return 0;
}

#include <stdio.h>

int main(){
    int age = 71;
    float income = 51000;



    if (age >= 60){
        if(income < 60000.0){
            printf("you are eligible for tax deduction.\n");
        } else {
            printf("you are not  eligible for tax deduction.\n");
        }
    } else if (age < 60) {
        printf("you are not  eligible for tax deduction.\n");

    }

    return 0;
}

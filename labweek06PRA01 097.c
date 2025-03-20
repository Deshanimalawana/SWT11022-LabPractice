#include<stdio.h>
int main()
{
    int age = 55;
    float income = 5000.0;

    if (age >=60){
        if(income<6000.0){
            printf("you are eligible for a tax deduction.\n");
        }else{printf("you are not eligible for a tax deduction.\n ");
        }
    }else{printf("you are not eligible for a tax deduction.\n");
    }
    return 0;
}

#include <stdio.h>
int main(){
    int age;
    float income;
    printf("Enter Your age, income:");
    scanf("%d %f",&age,&income);

    if(age>= 60){
        if(income <60000.0){
            printf("You are eligible for a tax deduction.\n");
        }
        else{
             printf("You are  not eligible for a tax deduction.\n");
        }
    }
    else{
        printf("You are  not eligible for a tax deduction.\n");
    }


return 0;
}

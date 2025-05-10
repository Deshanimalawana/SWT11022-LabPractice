#include <stdio.h>
int main(){
    int age;
    float income;


    printf("enter your age:");
    scanf("%d",&age);


    printf("enter your income:");
    scanf("%f",&income);

    if(age>=60){
            if(income<600000){
               printf("eligible for tax deduction\n");
               }
    }else{
        printf("not eligible for tax deduction\n");
    }
return 0;

}

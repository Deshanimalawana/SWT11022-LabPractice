#include<stdio.h>

int main(){
    int age;
    int income;
    printf("enter age:");
    scanf("%d" ,&age);
    printf("enter income:");
    scanf("%d" ,&income);

if(age>=60){
    if (income<60000){
        printf("eligible for deduction.\n");
    }
    else if(income>=60000){
        printf("not eligible for tax deduction.\n");
    }
}
else if(age<60){
    printf("not eligible for tax deduction.\n");
}

return 0;

}

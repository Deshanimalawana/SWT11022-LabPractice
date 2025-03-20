#include <stdio.h>
int main(){

int age;
float income;

printf("input age:");
scanf("%d",&age);

printf("input income:");
scanf("%d",&income);

if (age>=60){
    if (income<60000){
        printf("you are eligible to tax deduction\n");
    }
    else{
        printf("you are not eligible to tax deduction\n");
    }
}
else{
    printf("you are not eligible to tax deduction\n");
}

return 0;
}

#include <stdio.h>
int main(){

int age=55;
float income=50000;

if (age>=60){
    if (income<60000){
        printf("you are eligible for tax deduction\n ");
    }
    else {
        printf("you are not eligible for tax deduction\n");
    }
}
else {
    printf("you are not eligible for tax deduction\n");
}
return 0;
}

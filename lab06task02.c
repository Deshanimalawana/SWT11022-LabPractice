#include<stdio.h>
int main(){
 int age,income;
 printf("Enter your age and income : ");
 scanf("%d,%d",&age,&income);
 if (age >= 60){
    if (income <60000.0) {
        printf("you are eligible for a tax deduction.\n");
    } else{
        printf("you are not eligible for a tax deduction.\n");
    }
 } else {
 printf("you are not eligible for a tax deduction.\n");
 }
return 0;
}

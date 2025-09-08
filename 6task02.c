#include <stdio.h>
int main () {
int age;
float income;
printf("Age:");
scanf("%d",&age);
printf("Income:");
scanf("%d",&income);


if (age>=60){
    if(income<60000.0){
        printf("You are eligible for tax deduction.\n");
    }

if(age>=60){
    if(income>=60000.0) {
         printf("You are not eligible for tax deduction.\n");
    }
    }

    if(age<60){
        printf("You are not eligible for tax deduction.\n");
    }
}
else {
   printf("You are not eligible for tax deduction.\n");
   }
return 0;
}

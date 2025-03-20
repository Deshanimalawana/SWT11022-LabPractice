#include<stdio.h>
int main(){
int age,income;

printf("Enter your age:\n");
scanf("%d",&age);

printf("Enter your income:\n");
scanf("%d",&income);



if(age>=60){

    if(income<60000){

        printf("Eligible for tax deduction\n");
    }
    else{
        printf("Not eligible for tax deduction\n");
    }
}
else if(age>=60){
    if(income>=60000){
        printf("Not eligible for tax deduction\n");
    }
    else{
        printf("Eligible for tax deduction\n");
    }
}
else{
    printf("Not eligible for tax deduction\n");
}


return 0;
}

#include <stdio.h>

int main (){
    int hours;
    float payrate,salary;
    printf("Enter your work hours:");
    scanf("%d",&hours);
    printf("Enter your payrate:");
    scanf("%f",&payrate);
    salary=hours*payrate;
    printf("your salary is:%.2f",salary);



}

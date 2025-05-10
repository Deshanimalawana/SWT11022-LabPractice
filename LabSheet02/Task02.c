#include<stdio.h>
int main(){
    float hours;
    int payrate;
    float salary;

    printf("Total Work hours:");
    scanf("%f",&hours);
    printf("Pay Rate:");
    scanf("%d",&payrate);

    salary = hours*payrate;

    printf("your salary:%.2f",salary);

    return 0;

}

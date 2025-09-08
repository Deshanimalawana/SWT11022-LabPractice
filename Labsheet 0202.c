#include<stdio.h>
int main (){
    float payrate,total;
    int hours;

    printf("Enter Total worked hours:");
    scanf("%d",&hours);
    printf("Enter Payrate:");
    scanf("%f", &payrate);

    total=hours*payrate;
    printf("Total Salary :%.2f",total);

    return 0;
}

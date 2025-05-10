#include <stdio.h>
int main(){
    float houseWorked, payRate,totalSalary;

`
    printf("enter worked hours:");
    scanf("%f", &houseWorked);

    printf("pay rate for hour");
    scanf("%f", &payRate);
    totalSalary = houseWorked * payRate;

    printf("total salary: %.2f\n",totalSalary);
    return 0;
}

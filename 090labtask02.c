#include <stdio.h>
int main(){
    int hours;
    float payRate;

    printf("Enter Total worked hours: ");
    scanf("%d",&hours);

    printf("Enter pay Rate: ");
    scanf("%f",&payRate);

    float salary = hours*payRate;

    printf("Your pay Rate: %.2f, worked hours: %d\n",payRate,hours);
    printf("Your Salary: %.2f\n",salary);

    return 0;
}

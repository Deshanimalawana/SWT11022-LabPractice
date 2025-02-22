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
    printf("salary: %.2f",salary);




return 0;
}

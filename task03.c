#include <stdio.h>
int main(){
    float payRate;
    int hours;

    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter pay rate: ");
    scanf("%f", &payRate);
    float Salary = hours*payRate;
    printf("Your Pay Rate: %.2f, Worked Hours: %d\n",payRate, hours);
    printf("Salary: %.2f", Salary);
    return 0;



}

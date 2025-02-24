#include <stdio.h>
int main(){
    float payRate;
    int hours;
    float salary;

    printf("Enter total worked hours:");
    scanf("%d", &hours);
    printf("Enter pay rate:");
    scanf("%f", &payRate);
    salary = payRate*hours;

    printf("Total salary: %f\n", salary);
    return 0;


}

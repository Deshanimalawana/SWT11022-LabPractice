#include <stdio.h>

int main() {
    int hours;
    float payRate;
    printf("Enter total worked hours : ");
    scanf("%d",&hours);
    printf("Enter your pay rate : ");
    scanf("%2f",&payRate);
    float salary = hours*payRate;
    printf("Your salary : %2f",salary);
    return 0;
}

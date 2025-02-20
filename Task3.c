#include <stdio.h>
int main(){
    float payRate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);

    printf("Enter pay rate: ");
    scanf("%f", &payRate);
    printf("Your Pay Rate: %.2f, Worked hours: %d\n", payRate,hours);
    total=("payRate+hours");
    printf("Total: %.2f",total");

    return 0;
}

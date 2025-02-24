#include <stdio.h>
int main(){
    float payrate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter pay rate: ");
    scanf("%f",&payrate);


    float total = payrate*hours;
    printf("Your total salary: %.2f\n",total);
    return 0;
}

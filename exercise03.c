#include <stdio.h>
int main(){
    float payrate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter pay rate: ");
    scanf("%f",&payrate);
    printf("Your pay Rate: %2f, Worked hours: %d\n",payrate,hours);

    float total = payrate*hours;
    printf("Your total salary: %2f\n",total);
    return 0;
}

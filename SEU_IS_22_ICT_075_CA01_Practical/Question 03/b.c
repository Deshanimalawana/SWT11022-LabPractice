#include <stdio.h>

int main(){
    int money,years;
    float interest_rate, interest;
    printf("Enter the Money: "); scanf("%d",&money);
    printf("interest rate: "); scanf("%f",&interest_rate);
    printf("Years: "); scanf("%d",&years);
    interest = money * years * interest_rate;
    printf("The Interest is %.3f \n", interest );
    printf("The total amount is %.3f ", interest + money);
}

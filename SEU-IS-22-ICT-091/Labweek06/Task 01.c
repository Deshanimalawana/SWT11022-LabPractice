#include <stdio.h>
int main(){
    float unit, bill;

    printf("Enter The Amount of units");
    scanf("%f",&unit);

    if (unit < 50.00){
            bill= 0.50 * unit;

        printf("Amount is:%.2f", bill);
        }

    else if (unit < 150.00){
        bill = 0.50 * 50;
        unit -=50;

        bill += (0.75 * unit);

        printf("Amount is:%.2f", bill);

        } else if (unit < 250.00){
            bill = 0.50 * 50;
            unit -= 50;

            bill += (0.75 * 100);
            unit -= 100;

            bill += (1.2 * unit);

            printf("Amount is:%.2f", bill);

            }else{
                bill = 0.50 * 50;
                unit -= 50;

                bill += (0.75 * 100);
                unit -= 100;

                bill += (1.20 * 100);
                unit -= 100;

                bill += (1.5 * unit);

                printf("Amount is:%.2f", bill);
            }

            return 0;
}

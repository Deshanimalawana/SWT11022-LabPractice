#include <stdio.h>
int main ()
{
    int units;
    float billAmount = 0;

    for (int count = 1; count <= 10; count++) {
        printf("This is Bill Number %d\n", count);
        printf("Enter your Consumed Electricity Units :- ");
        scanf("%d", &units);
        if (units <=50) {
        billAmount = units * 0.50;

        }else if (units <= 150) {
        billAmount = (50 * 0.50) + ((units - 50) * 0.75);

        }else if (units > 150 && units < 250) {
        billAmount = (50 * 0.50) +  (100 * 0.75) + ((units - 150) * 1.20);

        }else {
        billAmount = (50 * 0.50) +  (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
        }
        printf("Your Total Electricity Bill is :- RS. %.2f\n\n", billAmount);
    }
    printf("The Bill counter Closed (Only print Ten bills per day..!\n)");
    return 0;

}

#include <stdio.h>

int main() {
    int units;
    float tot_price;

    printf("Enter the number of units: ");
    scanf("%d", &units);

    if (units <= 50) {
        tot_price = units * 0.50;
    }
    else if (units <= 150) {
        tot_price = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250) {
        tot_price = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else{
        tot_price = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20 + (units - 250) * 1.50;
    }

    printf("Your Total Electricity bill is:Rs %.2f\n",tot_price);

    return 0;
}

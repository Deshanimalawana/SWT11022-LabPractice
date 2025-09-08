#include <stdio.h>

int main() {
    float units, bill;

    for (int i = 1; i <= 10; i++) {
        printf("Enter the number of units consumed by person %d: ", i);
        scanf("%f", &units);

        if (units <= 50) {
            bill = units * 0.50;
        } else if (units <= 150) {
            bill = (50 * 0.50) + (units - 50) * 0.75;
        } else if (units <= 250) {
            bill = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
        } else {
            bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
        }

        printf("Total Electricity Bill for person %d: Rs. %.2f\n\n", i, bill);
    }

    return 0;
}

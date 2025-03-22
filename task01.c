#include <stdio.h>

int main() {
    float units, totalBill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    printf("Total Electricity Bill: Rs. %.2f\n", totalBill);

    return 0;
}

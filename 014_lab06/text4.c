#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units > 0) {
        if (units <= 50) {
            bill = units * 0.50;
        } else {
            bill = 50 * 0.50; // First 50 units

            if (units <= 150) {
                bill += (units - 50) * 0.75;
            } else {
                bill += 100 * 0.75; // Next 100 units

                if (units <= 250) {
                    bill += (units - 150) * 1.20;
                } else {
                    bill += 100 * 1.20; // Next 100 units
                    bill += (units - 250) * 1.50; // Above 250 units
                }
            }
        }
    } else {
        printf("Invalid input! Number of units should be greater than 0.\n");
        return 0;
    }

    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}

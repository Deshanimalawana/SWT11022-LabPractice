#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on the given rate slab
    if (units <= 50) {
        bill = units * 0.50;
    }
    else if (units <= 150) { // Next 100 units
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250) { // Next 100 units
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else { // Above 250 units
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Display the total bill amount
    printf("Total Electricity Bill: Rs. %.2f\n", bill);

    return 0;
}

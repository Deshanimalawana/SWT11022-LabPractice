#include <stdio.h>

int main() {
    int units;
    float total;

    printf("Enter the units: ");
    scanf("%d", &units);

    if (units <= 50) {
        total = units * 0.50;
    } else if (units <= 150) {
        total = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        total = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        total = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    printf("Total electricity bill: %.2f\n", total);

    return 0;
}

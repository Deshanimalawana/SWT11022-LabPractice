#include <stdio.h>
#include <stdlib.h>

int main() {
    float pricePerKg = 102.99;
    int quantity = 1000;
    float totalCost;

    totalCost = pricePerKg * quantity;

    printf("Rice price: %.2f per kg\n", pricePerKg);
    printf("Quantity: %d kg\n", quantity);
    printf("Total cost: %.2f\n", totalCost);

    return 0;
}

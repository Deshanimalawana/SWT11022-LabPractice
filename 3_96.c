#include <stdio.h>
#include <stdlib.h>

int main() {
    float price_Per_Kilo= 900.454;
    int Tot_quantity=26000;
    float total_Cost;

    total_Cost = price_Per_Kilo * Tot_quantity;

    printf("Rice price: %.2f per kg\n", price_Per_Kilo);
    printf("Quantity: %d kg\n", Tot_quantity);
    printf("Total cost: %.2f\n", total_Cost);

    return 0;
}

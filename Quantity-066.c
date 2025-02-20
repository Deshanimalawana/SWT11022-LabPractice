#include <stdio.h>

int main() {

    float p = 102.99; // Price per Kg = p
    float q = 1000; // q = Quantity
    float t; // t = Total cost

    printf("Quantity :");
    scanf("%f",&q);

    t = p * q;


    printf("Rice price: %0.2f per kg\n", p);
    printf("Quantity: %0.2f kg\n", q);
    printf("Total cost: %0.2f\n", t);

    return 0;
}

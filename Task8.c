#include <stdio.h>

int main(){
    float price = 5.99;
    int quantity = 4;
    float totalPrice = price * quantity;
    printf("Total price - %.2f\n", totalPrice);
    return 0;
}
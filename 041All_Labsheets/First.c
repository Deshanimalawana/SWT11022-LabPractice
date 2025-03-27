#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price = 59.99;
    int quantity = 4;
    float totalPrice= price * quantity;
    printf("Total price is : $%.2f\n", totalPrice);

    return 0;
}

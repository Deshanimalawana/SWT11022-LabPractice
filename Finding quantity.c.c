#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price = 59.9;
    int quantity = 4;
    float totalprice = price*quantity;
    printf("The total price is :$%.2f\n", totalprice);
    return 0;
}

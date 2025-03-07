#include <stdio.h>

int main(){
    float price = 5.99;
    int qty = 4;
    float tot = price * qty;

    printf("Total price = %.2f\n", tot);
    return 0;
}
#include <stdio.h>
int main (){

    float unit, bill;

    printf("Enter the number of units: ");
    scanf("%f", &unit);

    if (unit <= 50){
        bill = unit * 0.50;
    }
    else if (unit <= 150){
        bill = (50 * 0.50) + ((unit - 50) * 0.75);
    }
    else if (unit <= 250){
        bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    }
    else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }
    printf("Total: Rs. %.2f\n", bill);

    return 0;
}

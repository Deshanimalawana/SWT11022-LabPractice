#include <stdio.h>

int main(){
    int units;
    float bill;
    int count = 1;

    while (count <= 10)
    {
        printf("Enter of units of %d Person : ", count);
        scanf("%d", &units);
        
        if (units <= 50) {
            bill = units * 0.50;
        } else if (units <= 150) {
            bill = (50 * 0.50) + ((units - 50) * 0.75);
        } else if (units <= 250) {
            bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
        } else {
            bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
        }
        
        printf("Total bill: Rs. %.2f\n", bill);
        count++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int units;
    float Rate;

    printf("Enter the units: ");
    scanf("%d", &units);

    if(units <= 50) {
        Rate = units * 0.50;
    } else if(units <= 150) {
        Rate = (50 * 0.50) + (units - 50) * 0.75;
    } else if(units <= 250) {
        Rate = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
    } else if (units>=250){
        Rate = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
    }

    printf("Total bill: %.2f\n", Rate);
    return 0;
}


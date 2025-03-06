#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10, b = 25, c = 15;

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("largest number is: %d\n", largest);

    float avg = (a + b + c) / 3.0;
    printf("average of the three numbers is: %.2f\n", avg);

    return 0;
}



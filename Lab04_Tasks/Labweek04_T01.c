#include <stdio.h>

int main() {

    int a = 22, b = 17, c = 9;
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest number is: %d\n", largest);

    float average = (a + b + c) / 3.0;

    printf("Average is: % .2f\n", average);

    return 0;
}

#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 15;
    int largest;
    float average;

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    average = (a + b + c) / 3;

    printf("Largest number: %d\n", largest);
    printf("Average: %.2f\n", average);

    return 0;
}

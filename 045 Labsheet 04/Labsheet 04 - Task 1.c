#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;
    int c = 30;

    int largest = (a > b && a > c) ? a : (b > c ? b : c);
    printf("Largest number is: %d\n", largest);

    int average = (a + b + c) / 3;
    printf("Average is: %.d\n", average);

    return 0;
}

#include <stdio.h>

int main() {

    int a = 10, b = 25, c = 15;


    int largest;
    if (a > b && a > c) {
        largest = a;
    } else if (b > a && b > c) {
        largest = b;
    } else {
        largest = c;
    }


    int largest_with_ternary = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);


    float average = (a + b + c) / 3.0;


    printf("Largest number (using comparison operators): %d\n", largest);
    printf("Largest number (using ternary operator): %d\n", largest_with_ternary);
    printf("Average of the three numbers: %.2f\n", average);

    return 0;
}

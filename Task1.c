#include <stdio.h>
int main() {
    int a = 10, b = 25, c = 15;

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    float average = (a + b + c) / 3.0;

    printf("Numbers: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Largest Number: %d\n", largest);
    printf("Average: %.2f\n", average);

    return 0;
}

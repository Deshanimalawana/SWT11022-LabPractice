#include <stdio.h>

int main() {
    int a = 10, b = 25, c = 15;
    int largest = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("Largest number: %d\n", largest);
    printf("Average: %.2f\n", (a + b + c) / 3.0);
    return 0;
}

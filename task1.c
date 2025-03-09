#include <stdio.h>

int main() {
    
    int a = 12;
    int b = 15;
    int c = 23;

    int largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    float average = (a + b + c) / 3.0;

    printf("Largest  number: %d\n", largest);
    printf("Average: %.2f\n", average);

    return 0;
}

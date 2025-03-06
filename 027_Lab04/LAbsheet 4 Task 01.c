#include <stdio.h>

int main() {
    
    int a = 20, b = 40, c = 50;

    int largest_number = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The largest number: %d\n",largest_number);

    float average = (a + b + c) / 3.0;
    printf("The average is: %.2f\n",average);

    return 0;
}

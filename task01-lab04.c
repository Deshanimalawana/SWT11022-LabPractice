#include <stdio.h>

int main() {
    int a = 10, b = 25, c = 15;
    int largest;
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    
   int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number is: %d\n", max);
    
   float average = (a + b + c) / 3.0; 
    printf("The average of the three numbers is: %.2f\n", average);
    
    return 0;
}





#include <stdio.h>
int main (){
    int a = 10, b = 25, c = 15;

    int largest;
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

     printf("The largest number is: %d\n", (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c);
      float average = (a + b + c) / 3.0;

     printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}

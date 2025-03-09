#include <stdio.h>

int main() {
    int a = 30;
    int b = 45;
    int c = 78;
    int largest;


    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);

    return 0;
}

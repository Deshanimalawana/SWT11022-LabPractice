#include <stdio.h>

int main() {
    int a = 30;
    int b = 45;
    int c = 78;

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest number is: %d\n", largest);

    return 0;
}

#include <stdio.h>
int main() {
    int number = 1;

    printf("Odd numbers between 1 and 100 are:\n");

    while (number <= 100) {
        printf("%d ", number);
        number += 2;
    }

    return 0;
}

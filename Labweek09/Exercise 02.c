#include <stdio.h>

void printStars(int n);

void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter number of stars to print: ");
    scanf("%d", &number);
    printStars(number);
    return 0;
}

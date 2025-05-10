#include <stdio.h>

void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter number of stars: ");
    scanf("%d", &number);
    printStars(number);
    return 0;
}

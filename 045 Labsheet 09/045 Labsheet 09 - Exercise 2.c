#include <stdio.h>

void printStars(int n);

int main() {
    int n;

    printf("Enter the number of stars: ");
    scanf("%d", &n);

    printStars(n);

    return 0;
}

void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

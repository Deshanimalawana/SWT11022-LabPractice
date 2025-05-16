#include <stdio.h>

void printStars(int n);

int main() {
    int number;
    printf("Enter the number of stars: ");
    scanf("%d", &number);

    printStars(number);

    return 0;
}

void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }

}

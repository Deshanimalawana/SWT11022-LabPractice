#include <stdio.h>

void printStars(int n) {
    for(int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter number of stars: ");
    scanf("%d", &num);
    printStars(num);
    return 0;
}


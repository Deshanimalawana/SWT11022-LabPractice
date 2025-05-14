#include <stdio.h>

void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    printStars(5);
    return 0;
}

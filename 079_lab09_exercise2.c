#include <stdio.h>


void printStars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int n = 5;
    printStars(n);
    return 0;
}

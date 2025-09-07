#include <stdio.h>

void printStars(int n);

int main() {
    int n;
    printf("Input the Number :- ");
    scanf("%d", &n);

    printStars(n);
    return 0;
}
void printStars(int n) {
    printf("Stars :- ");
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}


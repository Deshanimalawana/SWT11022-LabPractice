#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Enter 10 integer numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nEntered numbers in reverse order:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

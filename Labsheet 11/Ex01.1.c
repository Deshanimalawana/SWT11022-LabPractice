#include <stdio.h>

#define SIZE 10

int main() {
    int numbers[SIZE];
    int i;

    printf("Enter 10 integers:\n");

    for(i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered: ");
    for(i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

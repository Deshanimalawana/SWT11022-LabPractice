#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr = numbers;
    int sum = 0;

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Sum using pointers
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);

    return 0;
}

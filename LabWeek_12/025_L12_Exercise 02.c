#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr;
    int sum = 0;

    ptr = numbers;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);
    return 0;
}

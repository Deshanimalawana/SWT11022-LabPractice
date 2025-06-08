#include <stdio.h>

int main() {
    int arr[10];
    int *ptr;
    int sum = 0;

    ptr = arr;  // Point to the beginning of the array

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr + i);  // input using pointer
    }

    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);  // dereference pointer
    }

    printf("Sum of 10 numbers: %d\n", sum);

    return 0;
}

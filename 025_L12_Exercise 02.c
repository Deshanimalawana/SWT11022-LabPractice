#include <stdio.h>

int main() {
    int arr[10], sum = 0;
    int *ptr;

    // Get 10 integer numbers from user
    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Use pointer to calculate sum
    ptr = arr;  // Points to first element of array
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    // Print the sum
    printf("Sum of the 10 numbers = %d\n", sum);

    return 0;
}

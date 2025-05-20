#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;
    int *ptr = arr;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);
    return 0;
}

#include <stdio.h>

int main() {
    int arr[10];

    // Reading 10 integers from user
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing in reverse order
    printf("Array in reverse order:\n");
    for(int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

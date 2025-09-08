#include <stdio.h>

int main() {
    int arr[10];

    for(int i = 0; i < 10; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    for(int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[10];


    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nArray elements in reverse order:\n");
    for(int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

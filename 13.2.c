#include <stdio.h>

void acceptArray(int *arr, int size) {
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void sortArray(int *arr, int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    printf("Sorted array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    acceptArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);

    return 0;
}


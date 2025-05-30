#include <stdio.h>

void inputArray(int *arr, int size);
void sortArray(int *arr, int size);
void printArray(int *arr, int size);

int main() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    inputArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);

    return 0;
}

void inputArray(int *arr, int size) {
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", (arr + i));
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
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

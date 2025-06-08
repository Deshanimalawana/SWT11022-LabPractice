#include <stdio.h>

// Function to sort the array using pointers (Bubble Sort)
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap elements
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int *arr, int size) {
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;

    // Step 1: Accept size and elements from the user
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Sort the array using function and pointer
    sortArray(arr, size);

    // Step 3: Print the sorted array
    printArray(arr, size);

    return 0;
}

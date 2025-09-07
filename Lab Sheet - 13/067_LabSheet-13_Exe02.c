#include <stdio.h>

void inputArray(int *arr, int size) {
    printf("Enter the %d Elements :- \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", (arr + i));
    }
}

void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    printf("The Sorted Array is = \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the Size of the Array :- ");
    scanf("%d", &size);

    int arr[size];

    inputArray(arr, size);
    sortArray(arr, size);
    printArray(arr, size);

    return 0;
}

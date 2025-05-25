
#include <stdio.h>


int getNumbers(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return 0;
}


int sortNumbers(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int showNumbers(int *arr, int size) {
    printf("Sorted numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    int size;
    printf("How many numbers? ");
    scanf("%d", &size);

    int arr[size];

    getNumbers(arr, size);
    sortNumbers(arr, size);
    showNumbers(arr, size);

    return 0;
}

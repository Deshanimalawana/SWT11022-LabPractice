#include <stdio.h>

int main() {
    int array[10];
    int uniqueArray[10];
    int isUnique;
    int k = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        isUnique = 1;

        for (int j = 0; j < 10; j++) {
            if (i != j && array[i] == array[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique == 1) {
            uniqueArray[k] = array[i];
            k++;
        }
    }

    printf("\nUnique values in the array:\n");

        for (int i = 0; i < k; i++) {
            printf("%d ", uniqueArray[i]);

    }

    return 0;
}

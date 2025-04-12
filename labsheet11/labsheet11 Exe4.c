
#include <stdio.h>

int main() {
    int arr[10], newArr[10], count = 0;
    printf("Enter 10 integer values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < count; j++) {
            if (arr[i] == newArr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            newArr[count] = arr[i];
            count++;
        }
    }
    printf("Unique values are:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", newArr[i]);
    }

    return 0;
}



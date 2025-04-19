#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[10], uniqueArr[10];
    int i, j, k = 0;
    int isDuplicate;

    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        isDuplicate = 0;

        for (j = 0; j < k; j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = 1;
                break;
        }
        }
        if (!isDuplicate) {
            uniqueArr[k] = arr[i];
            k++;
        }
    }
    printf("Unique values:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", uniqueArr[i]);
    }


    return 0;
}

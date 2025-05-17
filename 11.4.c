
#include <stdio.h>

int main() {
    int arr[10], unique[10], i, j, count, uIndex = 0;

    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicates and store unique values
    for(i = 0; i < 10; i++) {
        count = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
        if(count == 0) {
            unique[uIndex++] = arr[i];
        }
    }

    printf("Unique values are: ");
    for(i = 0; i < uIndex; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

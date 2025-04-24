#include <stdio.h>

int main() {
    int arr[10], unique[10], i, j, count, k = 0;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        count = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
        if(count == 0) {
            unique[k++] = arr[i];
        }
    }

    printf("Unique values:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}


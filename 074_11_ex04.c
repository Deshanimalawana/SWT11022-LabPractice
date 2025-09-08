#include <stdio.h>

int main() {
    int arr[10], unique[10], isUnique, count = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        isUnique = 1;
        for(int j = 0; j < count; j++) {
            if(arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            unique[count] = arr[i];
            count++;
        }
    }

    printf("Unique values:\n");
    for(int i = 0; i < count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

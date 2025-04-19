#include<stdio.h>

int main() {
    int arr[10], unique[10];
    int unique_count = 0;

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        int is_unique = 1;

        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == unique[j]) {
                is_unique = 0;
                break;
            }
        }

        if (is_unique) {
            unique[unique_count] = arr[i];
            unique_count++;
        }
    }

    printf("Unique numbers: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

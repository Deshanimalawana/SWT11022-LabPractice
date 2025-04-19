#include <stdio.h>

int main() {
    int a[10], b[10];
    int i, j, k = 0, duplicate;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        duplicate = 0;
        for (j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate == 0) {
            b[k] = a[i];
            k++;
        }
    }
    printf("\nUnique values: ");
    for (i = 0; i < k; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int num[10], unique[10];
    int i, j, k = 0, isDuplicate;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 10; i++) {
        isDuplicate = 0;
        for(j = 0; j < i; j++) {
            if(num[i] == num[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unique[k] = num[i];
            k++;
        }
    }

    printf("\nUnique values are:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a[10];
    int i, j, isDuplicate;


    printf("Enter 10 integer values:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }


    printf("\nOriginal array: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }


    printf("\nUnique values: ");
    for(i = 0; i < 10; i++) {
        isDuplicate = 0;
        for(j = 0; j <i; j++) {
            if(a[i] == a[j]) {
                isDuplicate = 1;
                continue;
            }
        }
        if(!isDuplicate) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}

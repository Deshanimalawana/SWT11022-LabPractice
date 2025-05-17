#include <stdio.h>

void sortNum(int num[], int n){
    for (int step = 0; step < n - 1; step++) {
        for (int i = 0; i < n - step - 1; i++) {
            if (*(num + i) > *(num + i + 1)) {
                int temp = *(num + i);
                *(num + i) = *(num + i + 1);
                *(num + i + 1) = temp;
            }
        }
    }
}

void printArray(int *num, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", *(num + i));
    }
    printf("\n");
}

int main()
{
    int n, i;
    printf("How many numbers do you need to sort: ");
    scanf("%d", &n);
    int num[n];
    printf("Input those numbers: ");
    for(i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    sortNum(num, n);
    printf("Sorted numbers.......\n");
    printArray(num, n);
    return 0;
}

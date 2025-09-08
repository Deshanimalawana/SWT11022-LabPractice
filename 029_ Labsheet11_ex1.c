#include <stdio.h>

    int main() {

        int arry1[10];

        for (int i = 0; i < 10; i++) {
            printf("Enter a integer number %d:\n",i+1);
            scanf("%d", &arry1[i]);
        }

        printf("\tReverse order of array elements:\n");
        for (int i = 9; i >= 0; i--) {
            printf("%d ", arry1[i]);
        }

    return 0;
}

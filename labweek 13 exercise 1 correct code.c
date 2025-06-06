#include <stdio.h>

int main() {

    int arr[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };


    int (*ptr)[3] = arr;


    printf("Base address of array: %p\n\n", (void*)ptr);


    printf("Row addresses:\n");
    for(int i = 0; i < 3; i++) {
        printf("Row %d address: %p\n", i+1, (void*)(ptr + i));
    }
    printf("\n");


    printf("Element addresses:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("arr[%d][%d] address: %p\n",
                   i, j, (void*)(*(ptr + i) + j));
        }
    }
    printf("\n");


    printf("Array elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d", *(*(ptr + i) + j));
        }
        printf("\n");
    }
    printf("\n");


    int sum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum += *(*(ptr + i) + j);
        }
    }
    printf("Sum of all elements: %d\n", sum);

    return 0;
}

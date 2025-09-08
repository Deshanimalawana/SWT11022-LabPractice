#include <stdio.h>  

int main() {  
    int arr[3][3] = {{34, 81, 96}, {72, 48, 24}, {80, 10, 71}};  
    int (*ptr)[3] = arr; // Pointer to 2D array  

    printf("Array base address: %p\n", ptr);  
    for (int i = 0; i < 3; i++) {  
        printf("Row %d address: %p\n", i, ptr + i);  
        for (int j = 0; j < 3; j++)  
            printf("Element [%d][%d] address: %p\n", i, j, *(ptr + i) + j);  
    }  

    int sum = 0;  
    printf("\nElements:\n");  
    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 3; j++) {  
            printf("%d ", *(*(ptr + i) + j));  
            sum += *(*(ptr + i) + j);  
        }  
        printf("\n");  
    }  
    printf("Sum of elements: %d\n", sum);  
    return 0;  
}  
#include <stdio.h>  

void sort(int *arr, int size) {  
    for (int i = 0; i < size; i++) {  
        for (int j = i + 1; j < size; j++) {  
            if (*(arr + i) > *(arr + j)) {  
                int temp = *(arr + i);  
                *(arr + i) = *(arr + j);  
                *(arr + j) = temp;  
            }  
        }  
    }  
}  

int main() {  
    int arr[5], n = 5;  
    printf("Enter 5 integers: ");  
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);  
    sort(arr, n);  
    printf("Sorted array: ");  
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  
    return 0;  
}  
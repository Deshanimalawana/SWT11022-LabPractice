#include <stdio.h>  

int main() {  
    int arr[10], sum = 0;  
    int *ptr = arr;  

    printf("Enter 10 integers:\n");  
    for(int i = 0; i < 10; i++) {  
        scanf("%d", ptr + i); // Equivalent to &arr[i]  
    }  

    for(int i = 0; i < 10; i++) {  
        sum += *(ptr + i); // Equivalent to arr[i]  
    }  

    printf("Sum: %d\n", sum);  
    return 0;  
}
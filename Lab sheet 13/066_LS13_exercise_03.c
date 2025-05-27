#include <stdio.h>  

void findMaxMin(int a, int b, int *max, int *min) {  
    *max = (a > b) ? a : b;  
    *min = (a < b) ? a : b;  
}  

int main() {  
    int num1 = 45, num2 = 23, max, min;  
    findMaxMin(num1, num2, &max, &min);  
    printf("Max: %d\nMin: %d\n", max, min);  
    return 0;  
}
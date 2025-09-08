#include <stdio.h>

int main() {
    float marks[10]; 
    float maxValue;   
    int i;

    
    printf("Enter 10 student marks:\n");

   
    for (i = 0; i < 10; i++) {
        printf("Enter mark %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    
    maxValue = marks[0];

    
    for (i = 1; i < 10; i++) {
        if (marks[i] > maxValue) {
            maxValue = marks[i];
        }
    }

    
    printf("The highest mark is: %.2f\n", maxValue);

    return 0;
}
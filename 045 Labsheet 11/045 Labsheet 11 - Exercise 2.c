#include <stdio.h>

int main() {
    float numbers[10];
    float search;
    int i;
    int present = 0;

    printf("Enter 10 floating point numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    printf("\nEnter a number to search: ");
    scanf("%f", &search);

    for(i = 0; i < 10; i++) {
        if(numbers[i] == search) {
            present = 1;
            break;
        }
    }

    if(present) {
        printf("Number is present in the array.\n");
    } else {
        printf("Number is not present in the array.\n");
    }

    return 0;
}

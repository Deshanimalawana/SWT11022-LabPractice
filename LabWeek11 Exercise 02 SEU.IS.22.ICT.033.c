#include <stdio.h>

int main() {
    float arr[10];
    float target;
    int found = 0;


    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    printf("\nEnter a number to check if it exists in the array: ");
    scanf("%f", &target);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The number %.2f exists in the array.\n", target);
    } else {
        printf("The number %.2f does not exist in the array.\n", target);
    }

    return 0;
}

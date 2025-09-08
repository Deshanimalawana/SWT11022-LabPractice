#include <stdio.h>


int main() {
    float numbers[10];
    float target;
    int found=0;


    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }


    printf("Enter the number to search for: ");
    scanf("%f", &target);


    for (int i = 0; i < 10; i++) {
        if (numbers[i] == target) {
            found=1;
            break;
        }
    }


    if (found) {
        printf("The number %.2f is present in the array.\n", target);
    } else {
        printf("The number %.2f is not present in the array.\n", target);
    }

    return 0;
}

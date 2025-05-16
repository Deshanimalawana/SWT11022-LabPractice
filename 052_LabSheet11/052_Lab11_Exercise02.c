#include <stdio.h>

int main() {
    float arr[10], Number;
    int found = 0;

    printf("Enter 10 floating-point numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f",&arr[i]);
    }

    printf("Enter a floating-point number to search:\n");
    scanf("%f",& Number);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == Number) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The number %.2f is present in the array.\n", Number);
    } else {
        printf("The number %.2f is not present in the array.\n", Number);
    }

    return 0;
}

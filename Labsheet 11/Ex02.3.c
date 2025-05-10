#include <stdio.h>

int main() {
    float numbers[] = {1.5, 2.3, 4.7, 5.6, 7.8};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    float target;
    int found = 0;

    printf("Enter a floating-point number to search: ");
    scanf("%f", &target);


    for (int i = 0; i < size; i++) {
        if (fabs(numbers[i] - target) < 0.00001) {
            printf("%.2f found at position %d in the array.\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%.2f is not present in the array.\n", target);
    }

    return 0;
}

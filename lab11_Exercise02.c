#include <stdio.h>
#include <stdbool.h>

int main() {
    float numbers[10], target;
    bool found = false;

    printf("Enter 10 floating point numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
    }

    printf("Enter a number to search: ");
    scanf("%f", &target);

    for (int i = 0; i < 10; i++) {
        if (numbers[i] == target) {
            found = true;
            break;
        }
    }

    if (found)
        printf("Number is present in the array.\n");
    else
        printf("Number is not present in the array.\n");

    return 0;
}

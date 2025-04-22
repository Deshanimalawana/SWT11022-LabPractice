#include <stdio.h>

int main() {
    float numbers[10];
    float search;
    int z,found = 0;

    printf("Enter 10 floating point numbers:\n");
    for (z = 0; z < 10; z++) {
        scanf("%f", &numbers[z]);
    }

    printf("Enter a number to search: ");
    scanf("%f", &search);

    for (z = 0; z < 10; z++) {
        if (numbers[z] == search) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The number %.2f is present in the array.\n", search);
    } else {
        printf("The number %.2f is not present in the array.\n", search);
    }

    return 0;
}

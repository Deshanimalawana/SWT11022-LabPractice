#include <stdio.h>

int main() {
    float numbers[10], target;
    int found = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
    }

    scanf("%f", &target);

    for (int i = 0; i < 10; i++) {
        if (numbers[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Number found in array\n");
    } else {
        printf("Number not found in array\n");
    }

    return 0;
}

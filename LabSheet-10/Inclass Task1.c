#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    printf("Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("Elements %d: %d\n", i, numbers[i]);
    }

    return 0;
}

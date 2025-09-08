#include <stdio.h>

int main() {
    int firstEven = 0;

    // Loop to find the first even number
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            firstEven = i;
            break; // Exit loop
        }
    }

    printf("The first even number is: %d\n", firstEven);

    return 0;
}

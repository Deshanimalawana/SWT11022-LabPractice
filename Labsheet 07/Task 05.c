#include<stdio.h>

int main() {
    // Use for loop to iterate through numbers from 1 to 20
    for (int i = 1; i <= 20; i++) {
        // If the number is odd, skip it using continue
        if (i % 2 != 0) {
            continue; // Skip odd numbers
        }

        // Print even numbers
        printf("%d ", i);
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Original array with 10 characters
    char original[10] = {'C', 'o', 'd', 'i', 'n', 'g', ' ', 'F', 'u', 'n'};

    // New array to hold the duplicate
    char duplicate[10];

    // Copy each element from original to duplicate
    for (int i = 0; i < 10; i++) {
        duplicate[i] = original[i];
    }

    // Display both arrays
    printf("Original array: [");
    for (int i = 0; i < 10; i++) {
        printf("'%c'", original[i]);
        if (i < 9) printf(", ");
    }
    printf("]\n");

    printf("Duplicate array: [");
    for (int i = 0; i < 10; i++) {
        printf("'%c'", duplicate[i]);
        if (i < 9) printf(", ");
    }
    printf("]\n");

    return 0;
}

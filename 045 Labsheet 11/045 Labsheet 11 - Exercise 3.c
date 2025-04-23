#include <stdio.h>

int main() {
    char original[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char duplicate[10];
    int i;

    for(i = 0; i < 10; i++) {
        duplicate[i] = original[i];
    }

    printf("Original array: ");
    for(i = 0; i < 10; i++) {
        printf("%c ", original[i]);
    }

    printf("\nDuplicate array: ");
    for(i = 0; i < 10; i++) {
        printf("%c ", duplicate[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    char characters[10] = {'C', 'P', 'r', 'o', 'g', 'r', 'a', 'm', '!', '\0'};

    printf("Array contents:\n");
    for (int i = 0; i < 10; i++) {
        printf("characters[%d] = %c\n", i, characters[i]);
    }

    // Print as string (if null-terminated)
    printf("\nAs string: %s\n", characters);

    return 0;
}

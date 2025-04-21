#include <stdio.h>

int main() {
    char original_array[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char duplicate_array[10];


    for(int i = 0; i < 10; i++) {
        duplicate_array[i] = original_array[i];
    }


    printf("Original array: ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", original_array[i]);
    }

    printf("\nDuplicate array: ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", duplicate_array[i]);
    }

    return 0;
}

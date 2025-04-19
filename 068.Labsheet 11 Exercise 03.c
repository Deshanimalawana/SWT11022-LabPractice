#include <stdio.h>
#include <stdlib.h>

int main()
{
    char originalArray[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char duplicatedArray[10];
    int i;

    for (i = 0; i < 10; i++) {
        duplicatedArray[i] = originalArray[i];
    }
    printf("Original Array: ");
    for (i = 0; i < 10; i++) {
        printf("%c ", originalArray[i]);
    }
    printf("\n");

    printf("Duplicated Array: ");
    for (i = 0; i < 10; i++) {
        printf("%c ", duplicatedArray[i]);
    }
    printf("\n");

    return 0;
}


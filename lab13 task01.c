#include <stdio.h>
int main() {

    int twoDArray[3][3] = {{34, 81, 96}, {72, 48, 24}, {80, 10, 71}};
    int (*ptrTo2DArray)[3];
    ptrTo2DArray = twoDArray;

    printf("Address of the 2D array using the pointer: %p\n\n", (void*)ptrTo2DArray);

    printf("Address of each row using pointers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address of row %d: %p\n", i, (void*)(ptrTo2DArray + i));
    }
    printf("\n");

    printf("Address of each element using pointers:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Address of twoDArray[%d][%d]: %p\n", i, j, (void*)(&twoDArray[i][j]));
        }
    }

    printf("\nElements of the array using pointer dereference:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("twoDArray[%d][%d]: %d\n", i, j, *(*(ptrTo2DArray + i) + j));
        }
    }
    printf("\n");

    int sum = 0;
    int *elementPtr;
    elementPtr = &twoDArray[0][0];

    for (int i = 0; i < 3 * 3; i++) {
        sum += *elementPtr;
        elementPtr++;
    }

    printf("Sum of all elements in the array using pointers: %d\n", sum);

    return 0;
}

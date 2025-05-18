 #include <stdio.h>

int main() {

    int array[3][3] = {
        {34, 81, 96},
        {72, 48, 24},
        {80, 10, 71}
    };


    int *ptr = &array[0][0];

    printf("Address of array using pointer: %p\n\n", (void*)ptr);
    printf("Addresses of each row and element:\n");

    for (int i = 0; i < 3; i++) {
        printf("Row %d address: %p\n", i, (void*)array[i]);
        for (int j = 0; j < 3; j++) {
            printf("Address of array[%d][%d]: %p\n", i, j, (void*)&array[i][j]);
        }
    }


    printf("Elements of the array using pointer dereferencing:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", *(ptr + i));
        if ((i + 1) % 3 == 0)
            printf("\n");
    }


    int sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}

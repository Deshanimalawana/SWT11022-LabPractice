#include <stdio.h>

int main() {
    int sum;
    int array_2d[3][3]={{34,81,96},{72,48,24},{80,10,71}};
    int *array_2d_pointer = &array_2d[0][0];
    printf("address of an array %p\n",&array_2d);

    printf("Address of the 1st row %p\n",&array_2d[0][0]);
    printf("Address of the 2nd row %p\n",&array_2d[1][0]);
    printf("Address of the 3rd row %p\n",&array_2d[2][0]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int *element_ptr = &array_2d[i][j];
            printf("%d,",*element_ptr);
            sum += *element_ptr;
        }
    }
    printf("\nSum of all elements: %d\n", sum);

    return 0;
}
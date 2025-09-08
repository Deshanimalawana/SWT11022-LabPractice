#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr = numbers;
    int sum = 0;
    int i;

    printf("Enter 10 integer numbers:\n");


    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", (ptr + i));
    }


    for (i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of numbers = %d\n", sum);

    return 0;
}

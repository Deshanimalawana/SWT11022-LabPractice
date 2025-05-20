#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int *ptr;

    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    printf("\nSum using array notation: %d\n", sum);


    sum = 0;
    ptr = numbers;
    for (int i = 0; i < 10; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Sum using pointer notation: %d\n", sum);

    return 0;
}

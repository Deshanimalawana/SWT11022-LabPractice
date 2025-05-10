#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr = numbers;
    int sum = 0;


    printf("Enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    return 0;
}

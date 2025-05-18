#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr = numbers;
    int sum = 0;

    printf("Enter Ten Integer Numbers:-\n");
    for (int i = 0; i < 10; i++) {
        printf("\tNumber %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 10; i++) {
        sum += *(ptr + i);
    }

    printf("\nSum of the 10 numbers = %d\n", sum);

    return 0;
}

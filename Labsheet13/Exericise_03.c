#include <stdio.h>

void findMaxMin(int *a, int *b, int *max, int *min) {
    *max = (*a > *b) ? *a : *b;
    *min = (*a < *b) ? *a : *b;
}

int main() {
    int num1, num2, maximum, minimum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    findMaxMin(&num1, &num2, &maximum, &minimum);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}

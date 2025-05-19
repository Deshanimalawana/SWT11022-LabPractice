#include <stdio.h>

void findMaxMin(int a, int b, int *max, int *min) {
    if(a > b) {
        *max = a;
        *min = b;
    } else {
        *max = b;
        *min = a;
    }
}

int main() {
    int num1, num2, max, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    findMaxMin(num1, num2, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

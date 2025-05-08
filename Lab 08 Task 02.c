#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int count;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &count);

    printf("Fibonacci sequence: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}


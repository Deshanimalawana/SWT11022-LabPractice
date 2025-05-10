#include <stdio.h>


int fibonacci(int n) {
    if (n <=1)
        return 0;

        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


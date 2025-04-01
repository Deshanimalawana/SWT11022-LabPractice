#include <stdio.h>


int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void printFibonacciSequence(int n) {
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int num;

    printf("Enter the number of Fibonacci numbers to display: ");
    scanf("%d", &num);

    printf("Fibonacci Sequence: ");
    printFibonacciSequence(num);

    return 0;
}

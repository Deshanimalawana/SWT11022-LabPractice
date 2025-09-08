#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int fnum;
    printf("Enter the number of terms for Fibonacci sequences: ");
    scanf("%d", &fnum);

    printf("Fibonacci sequence up to %d terms:\n", fnum);
    for (int i = 0; i < fnum; i++) {
        printf("%d ", fibonacci(i));
    }


    return 0;
}

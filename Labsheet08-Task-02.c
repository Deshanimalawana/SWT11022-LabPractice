 #include <stdio.h>
 int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);   }
}


int fibonacci(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}


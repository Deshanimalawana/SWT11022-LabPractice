#include <stdio.h>

int fibonacci(int num, int first, int second) {
    int next;
    printf("The Fibonacci order is --> \n");
    printf("%d\n", first);
    printf("%d\n", second);

    for (int a = 3; a <= num; a++) {
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
    }
    return 0;
}

int main() {
    int num;
    printf("Enter the Number:- ");
    scanf("%d", &num);

    int first = 0;
    int second = 1;

    fibonacci(num, first, second);

    return 0;
}

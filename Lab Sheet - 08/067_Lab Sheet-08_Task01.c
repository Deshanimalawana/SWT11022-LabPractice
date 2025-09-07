#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        printf("The %d is NOT a Prime Number, It's a Negative Number or Zero..!\n", num);
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("The %d is NOT a Prime Number..!\n", num);
            return 0;
        }
    }

    printf("The %d is a Prime Number..!\n", num);
    return 1;
}

int main() {
    int value;
    printf("Enter the Number :- ");
    scanf("%d", &value);

    isPrime(value);
    return 0;
}

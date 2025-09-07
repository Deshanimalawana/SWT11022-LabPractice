#include <stdio.h>
int factorial (int n) {
    if (n <= 1) {
        return 1;
    }else {
        return n * factorial(n - 1);
    }
}
int main () {
    int number;
    printf("Enter the Number :- ");
    scanf("%d", &number);
    int fact;
    fact = factorial(number);

    printf("d! = %d\n", number, fact);
    return 0;
}

#include<stdio.h>

int main() {
    int number;
    int remainder;
    printf("Enter the number: ");
    scanf("%d", &number);
    remainder=number%2;

    if (remainder > 0) {
    printf("odd number\n");
    }

    else {
    printf("even number\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    float numbers[10];
    int i;
    float num;

    printf("Enter 10 floating point numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);
    }

    printf("Enter the number to check: ");
    scanf("%f", &num);

    for (i = 0; i < 10; i++) {
        if (num == numbers[i]) {
            printf("The number %f is present",num);
            break;
        }
    }

    if (i == 10) {
        printf("The number not present");
    }

    return 0;
}

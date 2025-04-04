#include <stdio.h>

int main() {
    float marks[10];
    float max;

    printf("Enter marks of 10 students\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    max = marks[0];

    for (int i = 1; i < 10; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }

    printf("\nThe highest mark is: %.2f\n", max);

    return 0;
}

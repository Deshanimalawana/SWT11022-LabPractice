#include <stdio.h>

int main() {
    float marks[10];
    float max = 0.0;
    int i;

    printf("Enter marks for 10 students:\n");


    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }


    max = marks[0];
    for (i = 1; i < 10; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
    }


    printf("Maximum mark: %.2f\n", max);

    return 0;
}

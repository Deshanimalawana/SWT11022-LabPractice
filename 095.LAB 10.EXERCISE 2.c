#include <stdio.h>

int main() {
    float marks[6], sum = 0, avg;

    printf("Enter marks for 6 subjects: ");
    for (int i = 0; i < 6; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 6;

    printf("Entered Marks: ");
    for (int i = 0; i < 6; i++) {
        printf("%.2f ", marks[i]);
    }

    printf("\nAverage: %.2f\n", avg);
    return 0;
}

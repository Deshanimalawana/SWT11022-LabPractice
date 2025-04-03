#include <stdio.h>

int main() {

    float marks[6];

    float average, sum = 0;

    printf("Enter marks for six subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6;

    printf("\nEntered Marks: ");
    for (int i = 0; i < 6; i++) {
        printf("%.2f ", marks[i]);
    }

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}

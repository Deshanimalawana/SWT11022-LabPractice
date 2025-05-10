#include <stdio.h>

int main() {
    int marks[6];
    float sum = 0, average;

    printf("Enter marks for 6 subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6.0;

    printf("\nEntered marks are: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", marks[i]);
    }

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}

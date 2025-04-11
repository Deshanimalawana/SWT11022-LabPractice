#include <stdio.h>

int main() {
    int marks[6];
    float average, sum = 0;

    printf("Enter marks for six subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6;

    printf("\nEntered Marks: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", marks[i]);
    }

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}

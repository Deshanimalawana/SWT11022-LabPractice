#include <stdio.h>

int main() {
    int marks[6];
    float average = 0.0;

    printf("Enter marks for six subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += marks[i];
    }
    average = (float)sum / 6;


    printf("\nMarks entered:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    printf("\nAverage mark: %.2f\n", average);

    return 0;
}

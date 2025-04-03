#include<stdio.h>

int main() {
    int marks[6];
    float average;
    int sum = 0;

    printf("Enter the marks for 6 subjects:\n");
    for (int i = 0; i < 6; i++) {
        printf("subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6.0;

    printf("\nMarks entered:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    printf("\nAverage marks: %.2f\n", average);

    return 0;
}

#include <stdio.h>

int main() {
    int marks[6];
    float average;
    int sum = 0;

    printf("Enter marks for six subjects\n");
    for (int i = 0; i < 6; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6.0;

    printf("\nMarks of six subjects\n");
    for (int i = 0; i < 6; i++) {
        printf("Marks of subject %d: %d\n", i + 1, marks[i]);
    }

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}

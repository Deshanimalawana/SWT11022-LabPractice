#include <stdio.h>

int main() {
    int marks[6];
    float average;
    int i;

    for (i = 0; i < 6; i++) {
        printf("Enter Marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        average += marks[i];
    }

    average = average / 6.0;

    printf("Student Marks: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", marks[i]);
    }

    printf("\nAverage is = %.2f\n", average);

    return 0;
}

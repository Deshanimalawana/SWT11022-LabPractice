#include <stdio.h>

int main() {
    int subject_marks[6];

    float average, sum = 0;

    printf("Enter marks for 6 subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &subject_marks[i]);
        sum += subject_marks[i];
    }

    average = sum / 6;

    printf("\nEntered Marks: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", subject_marks[i]);
    }

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}

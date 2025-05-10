#include <stdio.h>

int main() {
    int students_marks[6];
    int sum = 0;
    float average;


    printf("Enter the marks for 6 subjects:\n");
    for (int i = 0; i < 6; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &students_marks[i]);
        sum += students_marks[i];
    }


    average = sum / 6.0;


    printf("\nStudent's Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, students_marks[i]);
    }
    printf("\nThe average marks are: %.2f\n", average);

    return 0;
}

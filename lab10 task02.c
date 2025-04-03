#include <stdio.h>

int main() {

    int subjectMarks[6];


    float average;


    printf("Enter the marks for six subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &subjectMarks[i]);
    }


    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += subjectMarks[i];
    }
    average = (float)sum / 6;


    printf("\nMarks entered for the subjects:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, subjectMarks[i]);
    }

    printf("Average of the marks: %.2f\n", average);

    return 0;
}

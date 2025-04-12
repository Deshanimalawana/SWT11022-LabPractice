
#include <stdio.h>

int main() {
    int marks[6];
    float average;

    printf("Enter marks for 6 subjects:\n");
    for (int i = 0; i < 6; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }


    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += marks[i];
    }
    average = sum / 6.0;


    printf("\nMarks of the student are:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
    printf("Average of the marks: %.2f\n", average);

    return 0;
}

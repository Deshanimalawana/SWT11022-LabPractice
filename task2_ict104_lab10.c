#include <stdio.h>

int main() {

    int subjectMarks[6];
    float average = 0.0f;
    printf("Enter marks for six subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &subjectMarks[i]);
    }


    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += subjectMarks[i];
    }
    average = (float)sum / 6;


    printf("\nStudent Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, subjectMarks[i]);
    }

    printf("Average Mark: %.2f\n", average);

    return 0;
}

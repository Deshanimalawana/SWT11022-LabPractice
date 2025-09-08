#include <stdio.h>

#define NUM_STUDENTS 2
#define NUM_SUBJECTS 5

int main() {
    float marks[NUM_STUDENTS][NUM_SUBJECTS];

    for (int student = 0; student < NUM_STUDENTS; student++) {
        printf("\nEnter marks for Student %d:\n", student + 1);
        for (int subject = 0; subject < NUM_SUBJECTS; subject++) {
            printf("Subject %d: ", subject + 1);
            scanf("%f", &marks[student][subject]);
        }
    }

    printf("\nStudent Marks Summary:\n");
    for (int student = 0; student < NUM_STUDENTS; student++) {
        printf("\nStudent %d marks:\n", student + 1);
        for (int subject = 0; subject < NUM_SUBJECTS; subject++) {
            printf("Subject %d: %.2f\n", subject + 1, marks[student][subject]);
        }
    }

    return 0;
}

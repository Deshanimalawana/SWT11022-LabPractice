#include <stdio.h>

#define NUM_STUDENTS 2
#define NUM_SUBJECTS 5

int main() {
    float marks[NUM_STUDENTS][NUM_SUBJECTS];
    char *subjects[] = {"Math", "Science", "English", "History", "Art"};

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter marks for Student %d:\n", i + 1);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &marks[i][j]);
        }
    }

    printf("\nMARK SHEET\n");
    printf("----------\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nSTUDENT %d MARKS:\n", i + 1);
        printf("----------------\n");

        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%-8s: %6.2f\n", subjects[j], marks[i][j]);
        }
    }

    return 0;
}

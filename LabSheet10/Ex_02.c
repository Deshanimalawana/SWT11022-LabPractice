#include <stdio.h>
#define NUM_SUBJECTS 6  // Constant for number of subjects

int main() {
    int marks[NUM_SUBJECTS];  // Array to store marks

    printf("Enter marks for %d subjects:\n", NUM_SUBJECTS);

    // Loop to get input for each subject
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        do {  // Validation loop
            printf("Subject %d mark (0-100): ", i + 1);
            scanf("%d", &marks[i]);

            if (marks[i] < 0 || marks[i] > 100) {
                printf("Invalid input! ");
                printf("Please enter between 0-100.\n");
            }
        } while (marks[i] < 0 || marks[i] > 100);
    }

    // Display confirmation
    printf("\nMarks successfully recorded:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}

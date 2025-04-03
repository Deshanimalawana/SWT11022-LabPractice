#include <stdio.h>

int main() {
    // Declare marks array for 5 students
    int marks[5];
    marks[0] = 98; // Assign first student's mark as 98

    // Declare and initialize an array for storing 5 students' ages
    int ages[5] = {21, 21, 23, 24, 25};

    // Change the second student's age to 27
    ages[1] = 27;

    // Declare an array for storing students' marks
    int students_marks[5];

    // Get marks from the user
    printf("Enter marks for 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &students_marks[i]);
    }

    // Display the marks stored in students_marks array
    printf("\nMarks entered:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, students_marks[i]);
    }

    return 0;
}

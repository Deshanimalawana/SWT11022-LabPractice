#include <stdio.h>
#include <stdlib.h>

int main() {

    int marks[5];
    marks[0] = 98;

    int ages[5] = {21, 21, 23, 24, 25};

    ages[1] = 27;

    int students_marks[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter mark for student %d:", i + 1);
        scanf("%d", &students_marks[i]);
    }

    printf("\nMarks of students are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", students_marks[i]);
    }
    printf("\n\nAge is: %d\n", ages[1]);

    return 0;
}

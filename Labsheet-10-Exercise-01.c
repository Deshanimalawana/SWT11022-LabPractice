#include <stdio.h>

int main() {
    int marks[5];
    marks[0] = 98;

    int ages[5] = {21, 21, 23, 24, 25};
    ages[1] = 27;

    int students_marks[5];


    for (int i = 0; i < 5; i++) {
        printf("Enter marks for 5 students: ");
        scanf("%d", &students_marks[i]);
    }


    printf("Students' Marks: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", students_marks[i]);
    }

    return 0;
}



#include <stdio.h>

int main() {
    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';

    printf("Student ID: %d\n", studentID);
    printf("GPA: %f\n", GPA);
    printf("Grade: %s\n", grade);


    studentID = 54321;
    GPA = 3.85;
    grade = 'A+';

    printf("Updated Student Details:\n");
    printf("Student ID: %d\n", studentID);
    printf("GPA: %f\n", GPA);
    printf("Grade: %s\n", grade);

    return 0;
}

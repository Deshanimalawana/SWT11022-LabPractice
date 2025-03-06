#include <stdio.h>

int main()
{
    int studentID;
    float GPA;
    char grade;

    studentID = 12345;
    GPA = 3.75;
    grade = 'A';

    printf("Student ID : %d\nGPA : %0.2f\nGrade : %c",studentID,GPA,grade);

    studentID = 54321;
    GPA = 3.90;
    char Grade[] = "A+";

    printf("\nUpdated Student ID : %d\nUpdated GPA : %0.2f\nUpdated Grade : %s",studentID,GPA,Grade);
    return 0;
}

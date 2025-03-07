#include<stdio.h>
int main (){
    int studentID;
    float GPA;
    char*grade;

    studentID = 12345;
    GPA = 3.75;
    grade = "A";

    printf("Student Id: %d\n", studentID);
    printf("Gpa: %.2f\n", GPA);
    printf("Grade: %s\n", grade);


    studentID = 54321;
    GPA = 3.90;
    grade = "A+";

    printf("Updated Student Id: %d\n", studentID);
    printf("Updated Gpa: %.2f\n", GPA);
    printf("Updated Grade: %s\n", grade);

    return 0;
}

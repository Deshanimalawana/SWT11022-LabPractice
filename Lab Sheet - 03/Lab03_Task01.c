#include <stdio.h>
#include <string.h>

int main() {

    int studentID;
    float GPA;
    char grade[3];

    studentID = 12345;
    GPA = 3.75;
    strcpy(grade, "A");


    printf("The Original Values are:\n");
    printf("Student ID:- %d\n", studentID);
    printf("GPA:- %.2f\n", GPA);
    printf("Grade:- %s\n\n", grade);


    studentID = 54321;
    GPA = 3.90;
    strcpy(grade, "A+");

    printf("The Updated Values are:\n");
    printf("Student ID:- %d\n", studentID);
    printf("GPA:- %.2f\n", GPA);
    printf("Grade:- %s\n", grade);

    return 0;
}

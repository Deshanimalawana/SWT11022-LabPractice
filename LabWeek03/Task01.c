#include <stdio.h>
int main (){

    int studentID ;
    float GPA ;
    char grade [3] ;

    studentID = 12345;
    GPA = 3.75;
    grade [0] = 'A';
    grade [1] = '\0';

    printf("Student ID: %d\nGPA: %.2f\ngrade: %s\n\n", studentID,GPA,grade);

    studentID = 54321;
    GPA = 3.90;
    grade [0] = 'A';
    grade [1] = '+';
    grade [2] = '\0';

    printf("Updated Values...\n\n");
    printf("Student ID: %d\nGPA: %.2f\ngrade: %s\n\n", studentID,GPA,grade);
    return 0;

}

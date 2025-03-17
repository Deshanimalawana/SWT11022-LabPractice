#include <stdio.h>

int main() {
     
    int studentID = 12345;
    float GPA = 3.75;
    char grade[3] = "A";   
    
    printf("Initial Student Details:\n");
    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %s\n\n", grade);

    studentID = 54321;
    GPA = 3.90;
    grade[0] = 'A';   
    grade[1] = '+';  
    grade[2] = '\0';  

    printf("Updated Student Details:\n");
    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %s\n", grade);

    return 0;
}


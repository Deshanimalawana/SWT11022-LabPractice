#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentID = 12345;
    float GPA = 3.75;
    char* grade="A";

    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %s\n\n", grade);

    studentID= 54321;
    GPA= 3.90;
    grade= "A+";

    printf("UPDATED STUDENT ID: %d\n",studentID);
    printf("UPDATED GPA: %.2f\n", GPA);
    printf("UPDATED Grade: %s\n", grade);

    return 0;
}

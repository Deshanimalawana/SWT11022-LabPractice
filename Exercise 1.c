#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentId;
    float GPA;
    char grade[2];
    studentId=12345;
    GPA=3.75;
    sprintf(grade,"A");
    printf("Initial Student Details:/n");
    printf("Student Id:%d\n",studentId);
    printf("GPA:%2fn",GPA);
    printf("Grade:%s\n\n",grade);
    studentId = 54321;
    GPA = 3.90;
    sprintf(grade,"A+");
    printf("Updated Student Details:\n");
    printf("Student Id:%d\n",studentId);
    printf("GPA:%.2f\n",GPA);
    printf("Grade: %s\n",grade);


    return 0;
}

#include <stdio.h>
int main()
{

    int studentID;
    float GPA;
    char grade;

    studentID = 12345;
    GPA = 3.75;
    grade = 'A';

    printf("studentID: %d\n",studentID);
    printf("GPA: %0.2f\n",GPA);
    printf("grade: %c\n",grade);

    studentID = 54321;
    GPA = 3.90;
    char Grade[] = "A+";

    printf("Update studentID: %d\n",studentID);
    printf("Update GPA: %0.2f\n",GPA);
    printf("Update grade: %s\n",Grade);
    return 0;
}






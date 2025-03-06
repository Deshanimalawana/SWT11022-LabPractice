#include <stdio.h>

int main(void){
    int StudentId;
    float GPA;
    char* Grade;

    StudentId = 12345;
    GPA = 3.75;
    Grade = "A";

    printf("Student ID : %d GPA : %.2f Grade : %s \n", StudentId, GPA, Grade);

    StudentId = 54321;
    GPA = 3.90;
    Grade = "A+";

    printf("Student ID : %d GPA : %.2f Grade : %s", StudentId, GPA, Grade);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    int studentID = 12345;
    float GPA = 3.75;
    char grade[3] = "A";

    printf("studentID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("grade: %s\n", grade);

    studentID = 54321;
    GPA = 3.90;
    strcpy(grade, "A+");

    printf("\nUpdate Values: \n");
    printf("studentID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("grade: %s\n", grade);

    return 0;
}

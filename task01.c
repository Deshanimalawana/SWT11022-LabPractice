#include <stdio.h>
int main () {
    int studentID;
    float GPA;
    char grade[] = "A+";

    studentID = 54321;
    GPA = 3.90;

    printf("Student ID is %d\n",studentID);
    printf("GPA is %.2f\n",GPA);
    printf("Grade is %s\n",grade);

    return 0;
}

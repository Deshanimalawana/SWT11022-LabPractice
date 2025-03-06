#include <stdio.h>
int main() {
    int studentID;
    float GPA;
    char grade;

    studentID = 12345;
    GPA = 3.75;
    grade = 'A';

    //printf("studentID : %d\n",studentID);
    //printf("GPA : %.2f\n",GPA);
    //printf("grade : %c\n",grade);

    studentID = 54321;
    GPA = 3.90;
    char Grade[] = "A+";

    printf("Updated studentID : %d\n",studentID);
    printf("Updated GPA : %.2f\n",GPA);
    printf("Updated grade : %s\n",Grade);

    return 0;
}

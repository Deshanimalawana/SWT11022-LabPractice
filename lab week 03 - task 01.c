#include <stdio.h>
int main () {

    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';

    studentID = 54321;
    GPA = 3.90;
    char grade_str[] = "A+";


    printf("Updated StudentID: %d\n",studentID);
    printf("Updated GPA: %.2f\n",GPA);
    printf("Updated grade: %s\n",grade_str);

    return 0;


}

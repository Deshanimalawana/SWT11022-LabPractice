#include <stdio.h>
int main(){
    int studentID=12345;
    float GPA=3.75;
    char grade='A';
    char Grade='+';
    printf("StudentID is : %d\n",studentID);
    printf("GPA is : %.2f\n",GPA);
    printf("Grade is : %c\n\n",grade);

    studentID=54321;
    GPA=3.90;
    grade='A';
    Grade='+';
    printf("StudentID is : %d\n",studentID);
    printf("GPA is : %.2f\n",GPA);
    printf("Grade is : %c%c\n",grade,Grade);

    return 0;
}

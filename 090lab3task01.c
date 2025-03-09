#include <stdio.h>
int main (){
    int studentID;
    float GPA;
    char grade;

    studentID=12345;
    GPA=3.75;
    grade='A';

    printf("student ID is: %d\nGPA is: %.2f\nGrade is: %c\n",studentID,GPA,grade);

    studentID=54321;
    GPA=3.90;
    char str[]="A+";

    printf("\nupdated student ID is: %d\nupdated GPA is: %.2f\nupdated Grade is: %s\n",studentID,GPA,str);

    return 0;

}

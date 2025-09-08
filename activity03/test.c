#include <stdio.h>
 int main(){

    int studentID;
    float gpa;
    char grade;

    studentID=12345;
    gpa=3.75;
    grade='A';

    printf("studentID:%d\n",studentID);
    printf("GPA:%.2f\n",gpa);
    printf("grade:%c\n",grade);

    studentID=54321;
    gpa=3.90;
    grade='A+';

    printf("\nUpdated student details:\n");
    printf("studentID:%d\n",studentID);
    printf("GPA:%.2f\n",gpa);
    printf("Grade:%c\n",grade);

    return 0;
  }

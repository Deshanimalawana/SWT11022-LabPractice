#include <stdio.h>
int main(){
    int studentID;
    float GPA;
    char grade;
    char simbol;

    studentID=12345;
    GPA=3.75;
    grade='A';
    printf("StudentId:%d\n" ,studentID);
    printf("GPA:%f\n" ,GPA);
    printf("Grade:%c\n",grade);

    studentID=54321;
    GPA=3.90;
    grade='A';
    simbol='+';

    printf("Update StudentId:%d\n",studentID);
    printf("Update GPA:%d\n",GPA);
    printf("Update Grade:%c%c\n",grade,simbol);

    return 0;
}

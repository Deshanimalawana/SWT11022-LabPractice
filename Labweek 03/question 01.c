#include<Stdio.h>
    int main() {
        int studentID=54321;
        float GPA=3.90;
        char grade[]="A+";

        grade[0]='A';
        grade[1]='+';

        printf("studentID:%d\nGPA:%.2f\nGrade:%s",studentID,GPA,grade);
        return 0;
        }

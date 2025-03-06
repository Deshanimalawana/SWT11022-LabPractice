#include<stdio.h>
    int main(){
        int studentsID=54321;
        float GPA=3.90;
        char Grade[]="A+";

        Grade[0]='A';
        Grade[1]='+';
        printf("studentsID:%d\nGPA:%.2f\nGrade:%s",studentsID,GPA,Grade);
        return 0;
    }

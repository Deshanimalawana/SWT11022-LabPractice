#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';

    printf("\nstudentID is :%d & his GPA is:%f also his grade is :%c\n", studentID,GPA,grade);

    studentID = 54321;
    GPA = 3.90;
    char str[]= "A+";
    printf("\nstudentID is :%d & his GPA is:%f also his grade is :%s\n",studentID,GPA,str);



    return 0;
}

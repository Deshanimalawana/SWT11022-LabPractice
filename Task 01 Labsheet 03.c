#include <stdio.h>
#include <stdlib.h>

int main()
{

    int studentID = 54321;
    float GPA = 3.90;
    char grade  = 'A';
    char mgrade = '+';


    int mystudentID = 54321;
    float myGPA = 3.90;
    char mygrade = 'A' ;
    char mymgrade = '+';

    studentID = mystudentID;
    GPA = myGPA;
    grade = mygrade;

    printf("studentID:%d\n",studentID);
    printf("GPA:%f\n",GPA);
    printf("grade:%c",grade);
    printf("%c",mgrade);

    return 0;
}

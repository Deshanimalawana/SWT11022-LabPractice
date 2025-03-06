#include <stdio.h>
int main(){
    int studentID;
    float GPA;
    char grade;

    studentID = 12345;
    GPA = 3.75;
    grade = 'A';

    printf ("student ID : %d \n",studentID);
    printf ("GPA : %.2f\n",GPA);
    printf ("Grade :%c\n",grade);


    studentID = 54321;
    GPA = 3.90;
    char str[] ="A+";

    printf ("student ID :%d\n",studentID);
    printf ("GPA :%.2f\n",GPA);
    printf ("Grade :%s\n",str);

    return 0;

}

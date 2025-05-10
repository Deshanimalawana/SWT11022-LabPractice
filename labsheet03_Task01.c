#include <stdio.h>

int main()
{
    int studentID =12345;
    float GPA = 3.75;
    char grade ='A';

    printf("Student ID:%d\n",studentID);
    printf("Student GPA:%.2f\n",GPA);
    printf("StudentGrade:%c\n",grade);

    studentID =54321;
    GPA = 3.90;
    char str[]="A+";

    printf("Updated ID:%d\n",studentID);
    printf("Updated GPA:%.2f\n",GPA);
    printf("Updated Grade:%s\n",str);

    return 0;
}

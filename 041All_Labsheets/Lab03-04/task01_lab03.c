#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studenTD= 12345;
    float GPA= 3.70;
    char grade[3] = "b";
    //print the code
    printf("Student ID is:%d\nGPA is:%.2f\nGrade is:%s\n", studenTD,GPA,grade);
    //update the value
    studenTD=54321;
    GPA=3.90;
    grade[1]='+';
    // print the updated value
    printf("Updated Student ID is:%d\nGPA is:%.2f\nGrade is:%s", studenTD,GPA,grade);
    return 0;
}

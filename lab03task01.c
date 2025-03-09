#include <stdio.h>
int main(){
    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';
    printf("student id: %d\n",studentID);
    printf("GPA :%f\n",GPA);
    printf("Grade :%c\n",grade);
    studentID = 54321;
    GPA = 3.90;
    grade = 'B';
    printf("updated student id: %d\n",studentID);
    printf("updated GPA :%f\n",GPA);
    printf("updated Grade :%c\n",grade);

return 0;
}


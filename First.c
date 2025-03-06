#include <stdio.h>
int main (){

    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';

    printf("studentID:%d\n",studentID);
    printf("GPA:%f\n",GPA);
    printf("grade:%c\n",grade);

    studentID = 54321;
    GPA = 3.90;
    grade = 'A+';

    printf("\nUpdate values:\n");
    printf("studentID:%d\n",studentID);
    printf("GPA:%2f\n",GPA);
    printf("grade:%s\n","A+");




    return 0;

}

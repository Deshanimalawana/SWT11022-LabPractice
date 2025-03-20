#include<stdio.h>
int main (){
 int studentid;
 float GPA;
 char grade;

 studentid=12345;
 GPA=3.75;
 grade='A';

    printf("student id:%d\n",studentid);
    printf("GPA:%f\n",GPA);
    printf("grade:%c\n",grade);

    studentid=54321;
    GPA=3.90;
    grade='A+';

    printf("updated student id:%d\n",studentid);
    printf("updated GPA:%f\n",GPA);
    printf("updated grade:%c\n",grade);

    return 0;




}

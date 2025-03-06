#include <stdio.h>
int main() {
    int studentID = 12345;
    float  GPA = 3.75 ;
    char*Grade = "A";

    printf ("initial  student  information :\n");
    printf ("student  ID :%d\n",studentID);
    printf("GPA :%.2f\n",GPA);
    printf("Grade:%s\n",Grade);

    studentID = 54321;
    GPA = 3.90;
    Grade = "A+";

    printf("\n updated student information:\n ");
    printf("studentID : %d\n",studentID);
    printf("GPA :%.2f\n",GPA);
    printf("Grade:%s\n","A+");






 return 0;

}

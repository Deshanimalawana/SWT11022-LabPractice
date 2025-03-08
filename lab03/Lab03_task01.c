#include<stdio.h>


int main(){
    int studentID;
    float GPA;
    char grade[10];

    studentID=12345;
    GPA =3.75;
    strcpy(grade, "A");

    printf("Before value\n");
    printf("%d is got %fGPA and got %s Grade.\n",studentID,GPA,grade);

    studentID=54321;
    GPA =3.90;
    strcpy(grade, "A+");

    printf("Updated value\n");
    printf("%d is got %fGPA and got %s Grade.\n",studentID,GPA,grade);
    return 0;
}

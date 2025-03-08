#include<stdio.h>
int main(){
//Declares variables
    int studentID;
    float GPA;
    char grade;
//Initializes
    studentID=12345;
    GPA=3.75;
    grade='A';
//Displays
    printf("Student ID is : %d\n",studentID);
    printf("GPA is : %.2f\n",GPA);
    printf("Grade is : %c\n\n",grade);
//Updates
    char Grade='+';
    studentID=54321;
    GPA=3.90;
    grade='A';
//Displays the updated values
    printf("Student ID is : %d\n",studentID);
    printf("GPA is : %.2f\n",GPA);
    printf("Grade is : %c%c\n",grade,Grade);

return 0;
}

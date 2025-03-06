#include<stdio.h>
int main(){
int studentID=12345;
float GPA=3.75;
char grade='A';
char mgrade='+';
int mystudentID=54321;
float myGPA=3.90;
char mygrade='A';
char myygrade='+';
studentID=mystudentID;
GPA=myGPA;
grade=mygrade;
mgrade=myygrade;
printf("StudentID: %d\n",studentID);
printf("GPA: %.2f\n",GPA);
printf("Grade: %c",grade);
printf("%c",mgrade);
return 0;

}
